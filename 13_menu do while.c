#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int scelta;
	do
	{
		printf ("----MENU'----\n 1. SOMMA\n 2. DIFFERENZA\n 0. ESCI\n Inserisci un numero per selezionare la scelta: ");
		scanf("%d", &scelta);
	}
	while (scelta!=0);
}
