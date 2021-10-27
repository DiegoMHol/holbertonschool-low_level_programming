#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array -create an array, init with specific char
*@size: unisgned int
*@c: char
*Return: 0
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	if (size <= 0)
	{
		return (NULL);
	}

	j = malloc(sizeof(char) * size);

	if (j == NULL)/*No memory to use*/
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		j[i] = c;
	}

	return (j);
}
