#include "main.h"
/**
*get_bit -Return calue of bit given
*@n: unsigned long
*@index: index
*Return: 0
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
