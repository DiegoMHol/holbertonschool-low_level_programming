#include "main.h"
/**
*reverse_array -reverse a string
*@a: char
*@n: int
*Return: 0
*/
void reverse_array(int *a, int n)
{
	int b, c;

	for (b = 0; b < n; b++)
	{
		n--;
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
