
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
		int x;
		
		printf("Verifica se un numero e dispari!\n\n");
		
		printf("Inserisci il numero: ");
		scanf("%d", &x);
		
		int verifica = (x>0) && (x%2 == 1);
		
		if (verifica == 1)
		{
			printf("Il numero %d e positivo e dispari.", x);
		}
			else
			{
				printf("Il numero %d non e dispari/positivo.", x);
			}
			
		
}
