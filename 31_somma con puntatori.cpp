#include <stdio.h>

//puntatori ad una funzione somma - void somma(int *a, int *b, int *risultato)

void somma (int *a, int *b, int *risultato)
	{
		*risultato= *a+*b;		
	}


int main()
{
	int a, b, risultato;
	
	printf("Esegui la somma di due numeri!\n");
	printf("Primo numero: ");
	scanf("%d", &a);
	
	printf("Secondo numero: ");
	scanf("%d", &b);
	somma(&a, &b, &risultato);
	printf("la somma dei due numeri e: %d\n", risultato);
}
