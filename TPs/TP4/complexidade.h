#include <stdio.h>  
#include <stdlib.h>  
#include <sys/timeb.h> 
#include <time.h>  
int CONTA;
struct timeb TSTART, TEND;

void start_clock()
{
	ftime(&TSTART);
} 

void stop_clock()
{
	ftime(&TEND);
	int diff = (int) (1000.0 * (TEND.time - TSTART.time)
	    + (TEND.millitm - TSTART.millitm));
    printf("\n ---> Tempo de execu��o: %u ms <---\n", diff);
}

void conta_reset()
{
	CONTA=0;
}

void conta_maismais()
{
	printf(" \b \b \b \b \b \b \b \b \b \b \b \b \b \b \b \b \b \b \b");
	CONTA++;
}

void conta_print(char* m)
{
	printf("\n =========================================================================");
	printf("\n Function: %s ", m);
	printf("\n N. Instr:%d", CONTA);
	printf("\n =========================================================================\n");
}

void preenche_vetor_random(int v[], int N)
{
	int i;
	srand(time(NULL));
	for (i = 0; i<N; i++)
	{
		v[i] = rand() % 100 + 1;
	}
}

void print_vetor(int v[], int N)
{
	int i;
	printf("\n---------------------------\n");
	for (i = 0; i<N; i++)
	{
		printf("[%2d] => %3d\n", i, v[i]);
	}
	printf("---------------------------\n");
}
