#include <stdio.h>
#include <string.h>



struct Persona 
	{
		char nome[30];
		char cognome[30];
		int eta;
	};

int main()
{
	struct Persona p;
	
	printf("Inserisci il nome: ");
	scanf("%s",&p.nome);
	
	printf("Inserisci il cognome: ");
	scanf("%s", &p.cognome);
	
	printf("Inserisci l'eta: ");
	scanf("%d",&p.eta);
	
	printf("\n\n--DATI INSERITI--\n\n");
	printf("Nome: %s\n",p.nome);
	printf("Cognome: %s\n", p.cognome);
	printf("Eta: %d", p.eta);

	
	
	
	
}
