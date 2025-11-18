#include <stdio.h>

int main()

{
    int voto=0;
    
    printf("Inserisci il tuo voto: ");
	scanf("%d", &voto);

	while (voto>10 || voto<0)
	{
	printf("Voto non valido, inserisci un numero tra 0 e 10.\n Inserisci il tuo voto: ");
	scanf("%d", &voto);
	}
	
	if (voto>=6)
	{
	printf("Sei promosso!");
	}
		
	else  
	{
		printf ("Sei bocciato :(");
	}
}
