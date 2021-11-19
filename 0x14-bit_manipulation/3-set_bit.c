#include "main.h"
/**
*set_bit -Set value of a bit to 1 at given index
*@index: index
*@n: long int
*Return: 0
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
