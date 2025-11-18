#include <stdio.h>
#include <stdlib.h>

float main () {
	
	float base, altezza, area;
	
	printf ("Inserisci base: ");
	scanf ("%f", &base);
	
	printf ("Inserisci altezza: ");
	scanf ("%f", &altezza);
	
	area = base * altezza / 2;
	
	printf ("Area= ");
	printf ("%.2f", area);
	
	
}
