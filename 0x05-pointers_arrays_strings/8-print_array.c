#include "main.h"
#include <stdio.h>
/**
*print_array -print n elements of an array of int
*@a: int
*@n: int
*Return: 0
*/
void print_array(int *a, int n)
{
	int b = 0;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b < (n - 1))
			printf(", ");
	}
	printf("\n");
}
