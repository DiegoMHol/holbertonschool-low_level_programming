#include "main.h"
/**
*flip_bits -number of bits need to flip from one num to other
*@n: long int
*@m: long int
*Return: 0
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned long int j;

	i = 0;
	for (j = n ^ m; j != 0; j = j >> 1)
	{
		i += (j & 1);
	}
	return (i);
}
