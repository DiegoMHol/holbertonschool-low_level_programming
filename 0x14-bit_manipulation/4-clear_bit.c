#include "main.h"
/**
*
*
*
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
