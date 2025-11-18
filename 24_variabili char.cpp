#include <stdio.h>

int main() 
{
	
	
    char giorno;

    printf("Inserisci la prima lettera del giorno della settimana (escluso Mercoledi): ");
    scanf(" %c", &giorno);

    switch(giorno) 
	{
        case 'l':
            printf("Lunedi\n");
            break;
        case 'm':
            printf("Martedi\n");
            break;
        case 'g':
            printf("Giovedi\n");
            break;
        case 'v':
            printf("Venerdi\n");
            break;
        case 's':
            printf("Sabato\n");
            break;
        case 'd':
            printf("Domenica\n");
            break;
        default:
            printf("Carattere non valido.\n");
    }
}
