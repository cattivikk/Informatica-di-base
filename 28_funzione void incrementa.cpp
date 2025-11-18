#include <stdio.h>
//variabili globali e locali

void incrementa (int n)
{
	n=n+1;
	printf("In nuovo valore di n e: %d\n", n);
}


int main()
{
	int k=0;
	printf("Inserisci numero: ");
	scanf("%d", &k);
	incrementa(k);
	char cacca[]= {'a'};
	printf("%s", cacca);
	
}
