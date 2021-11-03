#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
*array_interator -entry
*@array: int
*@size: size_t
*@action: action
*Return: 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < (int)size; i++)
	{
		action(*(array + i));
	}
}
