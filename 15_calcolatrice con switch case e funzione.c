#include <stdio.h> 

int somma (int a, int b)
{
	printf("\nInserisci il primo valore della somma: ");
		scanf("%d", &a);
		printf("\nInserisci il secondo valore della somma: ");
		scanf("%d",&b);
	int	somma=a+b;
		printf("\nIl risultato della somma e': %d\n\n",somma);
		
}


int main (){


	int a, b, scelta=0;

do
{
	printf("------Menu'------\n\n");
	printf("1. Somma\n2. Differenza\n3. Moltiplicazione\n4. Divisione\n0. Esci\n\n");
	printf("Inserisci la scelta----> ");
	scanf("%d", &scelta);
	
	switch (scelta)
	{
	case 1:
	
		somma(a,b);
		break;
		
	case 2:
	
		printf("\nInserisci il primo valore della differenza: ");
		scanf("%d", &a);
		printf("\nInserisci il secondo valore della differenza: ");
		scanf("%d",&b);
		int differenza=a-b;
		printf("\nIl risultato della differenza e': %d\n\n", differenza);
		break;
	
	case 3:
	
		
		printf("\nInserisci il primo valore della moltiplicazione: ");
		scanf("%d", &a);
		printf("\nInserisci il secondo valore della moltiplicazione: ");
		scanf("%d",&b);
		int moltiplicazione=a*b;
		printf("\nIl risultato della moltiplicazione e': %d\n\n", moltiplicazione);
		break;
	
	case 4:
	
		
		printf("\nInserisci il primo valore della divisione: ");
		scanf("%d", &a);
		printf("\nInserisci il secondo valore della divisione: ");
		scanf("%d",&b);
		int divisione=a/b;
		printf("\nIl risultato della divisione e': %d\n\n", divisione);
		break;
		
		
	case 0:
		
		printf("Esco dal programma.");
		break;
		
		
		default: 
		printf ("Scelta non valida.\n");
		
	
	
	}
}
    while (scelta!=0);	
	
	return 0;					
}
