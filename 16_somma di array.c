#include <stdio.h>
#include <stdlib.h>

int main()
{
	int v1[10];
	int v2[10];
	int v3[10];
	
	printf("Inserisci i valori del primo array: \n");
	
	int i;
	for (i=0;i<10;i++)
	{
		printf("Inserisci il valore %d: ",i+1);
		scanf("%d",&v1[i]);
	}
	
	printf("Inserisci i valori secondo array: \n");
	
		for (i=0;i<10;i++)
	{
		printf("Inserisci il valore %d: ",i+1);
		scanf("%d",&v2[i]);
    }
	
	for (i=0;i<10;i++)
	{
		v3[i]=v1[i]+v2[i];
		printf("La somma dei vettori e' uguale a: %d\n", v1[i]+v2[i]);
		
	}
	
	
	
}



	
