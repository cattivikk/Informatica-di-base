#include <stdio.h>

int main()
{
	int x=10;
	int *pu= &x;
	
	printf("%p", (void*)&x);
}
