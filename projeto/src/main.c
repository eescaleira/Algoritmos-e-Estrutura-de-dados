#include "push_swap.h"
// se ja estiver sorted
int	check_input(char **av)
{
	for (int i = 1; av[i] != NULL; i++)
	{
		for (int j = 0; av[i][j] != '\0'; j++)
		{
			if (av[i][j] > 57)
			{
				printf("Error\n");
				return (-1);
			}
		}
	}
	return (0);
}

int	check_2(char **av)
{
	for (int i = 1; av[i] != NULL; i++)
	{
		for (int j = i + 1; av[j] != NULL; j++)
		{
			if (ft_atoii(av[j]) == -1 || ft_atoii(av[i]) == -1 
				|| ft_atoii(av[i]) == ft_atoii(av[j]))
			{
				printf("Error\n");
				return (-1);
			}
		}
	}
	return (0);
}

t_stack	*push_swap(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(*stack_a) == 2)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			sa(&(*stack_a));
		return (*stack_a);
	}
	variables_corretor(&(*stack_a));
	sort_stack(&(*stack_a), &(*stack_b));
	return (*stack_a);
}

int	ac_check(int ac)
{
	if (ac <= 2)
	{
		printf("Error\n");
		return (-1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (check_input(&(*av)) != 0 || check_2(&(*av)) != 0 || ac_check(ac) != 0)
		return (0);
	for (int i = 1; av[i] != NULL; i++)
	{
		if (av[i])
			ft_lstadd_back(&stack_a, ft_lstnew(ft_atoii(av[i])));
		else
			write(1, "Error\n", 6);
	}
	push_swap(&stack_a, &stack_b);
	free_stack(&stack_a);
	return (0);
}
