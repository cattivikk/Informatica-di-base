#include <stdio.h>

int main() {
    int n;	

    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);

    int arr[n];
    int i;

    printf("Inserisci %d numeri:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 
int somma = 0;
    for(i = 0; i < n; i++) {
        somma += arr[i];
    }
    printf("\n1) Somma degli elementi = %d\n", somma);
 
 
    
}

