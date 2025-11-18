#include <stdio.h>
#include <stdlib.h>
#define dim 10

int main()
{
		int i;
		int a[dim] = {10,20,30,40,50,60,70,80,90,100};
	
	
	for (i=0; i<10; i++)
	{
		printf("%d\n",a[i]);
	}

	printf("\nnumeri casuali: \n");
	for (i=0; i<10; i++)
	{
		a[i]= rand();
		printf("%d\n",a[i]);
	}
	
	
	
	
}
