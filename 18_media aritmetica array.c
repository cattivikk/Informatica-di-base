#include <stdio.h>
#include <stdlib.h>

	int main() {
    int n;
    int somma=0;

    // --------------- LETTURA ARRAY ---------------
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);

    int arr[n];
   	int i=0;

    printf("Inserisci %d numeri:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        somma= somma + arr[i];
    }
	
	
	
	
	float media = (float)somma / n;
    printf("2) Media aritmetica = %.2f\n", media);
    
}
