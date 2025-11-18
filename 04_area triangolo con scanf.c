#include <stdio.h>
#include <stdlib.h>

int main () 
{
	int base, altezza, area;
	
	printf ("CALCOLO AREA TRIANGOLO\n");
	printf ("\n");
	
	printf ("Inserisci base: ");
	scanf ("%d", &base);
	
	printf ("Inserisci altezza: ");
	scanf ("%d", &altezza);
	
	area= base * altezza / 2;
	
	printf ("Area del triangolo: ");
	printf ("%d", area);
	
	return 0;
} 	
