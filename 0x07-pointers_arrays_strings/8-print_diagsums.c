#include "main.h"
#include <stdio.h>
/**
*print_diagsums -the sum of the two diagonals of a square matrix of integers.
*@a: int
*@size: int
*Return: 0
*/
void print_diagsums(int *a, int size)
{
	int diag1 = 0;
	int diag2 = 0;
	int i = 0;
	int j = 0;
	int k = 0;

	for (; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				diag1 += a[k];
			}
			if ((i + j) == size - 1)
			{
				diag2 += a[k];
			}
			k++;
		}
	}
	printf("%d, ", diag1);
	printf("%d\n", diag2);
}
