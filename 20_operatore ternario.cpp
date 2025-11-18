#include <stdio.h>

int main ()
{
    printf("-VERIFICA SE UN NUMERO E' POSITIVO O NEGATIVO-\n\n");

    float x;

    printf("Inserisci il numero: ");
    scanf("%d",&x);

    (x >=0) ? printf("Il numero e positivo.") : printf("Il numero e negativo.");

    

}
