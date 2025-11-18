#include <stdio.h>
#include <stdlib.h>


int main () 
{
	int voto;
	printf("inserisci voto:");
	scanf ("%d", &voto);
	
	if (voto>=6 && voto<=10) 
	{
		printf ("Promosso");
	}
	else 
	{
		printf ("Bocciato");
	}
	}
	

