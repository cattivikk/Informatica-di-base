#include <stdio.h>
#include <stdlib.h>

int main (){


	int a, b, somma, scelta=0, differenza, moltiplicazione, divisione;

do
{
	printf("------Menu'------\n\n");
	printf("1. Somma\n2. Differenza\n3. Moltiplicazione\n4. Divisione\n0. Esci\n\n");
	printf("Inserisci la scelta----> ");
	scanf("%d", &scelta);
	
	if (scelta==1)
	{
		printf("\nInserisci il primo valore della somma: ");
		scanf("%d", &a);
		printf("\nInserisci il secondo valore della somma: ");
		scanf("%d",&b);
		somma=a+b;
		printf("\nIl risultato della somma e': %d\n\n",somma);
		
	}
	else if (scelta==2)
	{
		printf("\nInserisci il primo valore della differenza: ");
		scanf("%d", &a);
		printf("\nInserisci il secondo valore della differenza: ");
		scanf("%d",&b);
		differenza=a-b;
		printf("\nIl risultato della differenza e': %d\n\n", differenza);
	}
	else if (scelta==3)
	{
		
		printf("\nInserisci il primo valore della moltiplicazione: ");
		scanf("%d", &a);
		printf("\nInserisci il secondo valore della moltiplicazione: ");
		scanf("%d",&b);
		moltiplicazione=a*b;
		printf("\nIl risultato della moltiplicazione e': %d\n\n", moltiplicazione);
	}
	else if (scelta==4)
	{
		
		printf("\nInserisci il primo valore della divisione: ");
		scanf("%d", &a);
		printf("\nInserisci il secondo valore della divisione: ");
		scanf("%d",&b);
		divisione=a/b;
		printf("\nIl risultato della divisione e': %d\n\n", divisione);
	}
}
    while (scelta!=0);						
}
