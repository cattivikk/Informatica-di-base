#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a[] = {1,2,2,3,4,4,7,7, 14};
    int b[9];
    int k = 0; 

    printf("Valori prima del set: ");
    for (int i = 0; i < 9; i++) {		
        printf("%d ", a[i]);
    }

    printf("\n\nValori senza duplicati: ");

    for (int i = 0; i < 9; i++)
    {
        bool isPresent = false;

       
        for (int j = 0; j < k; j++)
        {
            if (a[i] == b[j]) {
                isPresent = true;
                break;
            }
        }

       
        if (!isPresent) {
            b[k] = a[i];
            k++;
        }
    }

    
    for (int i = 0; i < k; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
