#include "main.h"
/**
*clear_bit -Set teh value of a bit to 0
*@n: long int
*@index: index
*Return: 0
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * sizeof(long int)))
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
