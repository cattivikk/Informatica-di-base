#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define dim 10

int main()
{
    int i, j, temp;
    int a[dim];
    int min = 0;
    int max = 100;
    
    srand(time(NULL));

    printf("---NUMERI CASUALI---\n");
    for (i = 0; i < dim; i++)
    {
        a[i] = rand() % (min, max);
        printf("ciclo %d = %d\n", i+1, a[i]);
    }

    // BUBBLE SORT
    for (i = 0; i < dim - 1; i++)
   
    {
        for (j = 0; j < dim - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\n---ARRAY ORDINATO (BUBBLE SORT)---\n");
    for (i = 0; i < dim; i++)
    {
        printf("posto %d = %d\n", i + 1, a[i]);
    }

    return 0;
}
