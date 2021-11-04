#include "function_pointers.h"
#include <stdio.h>
/**
*int_index -search for int
*@cmp: int
*@size: int
*@array: int
*Return: 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
