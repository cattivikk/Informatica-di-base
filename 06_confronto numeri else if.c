#include <stdio.h>
#include <stdlib.h>

int main () {
	int N1, N2;
	
	printf ("Inserisci Primo numero: ");
	scanf ("%d", &N1);
	
	printf ("Inserisci Secondo numero: ");
	scanf ("%d", &N2);
	
	if (N1>N2) 
	{
	printf ("Il primo numero e' piu' grande.");
	}
	else if (N1==N2)
	{
	printf ("I due numeri sono uguali");	
	}
	else
	{
    printf ("Il secondo numero e' piu' grande.");		
	}
	
}

