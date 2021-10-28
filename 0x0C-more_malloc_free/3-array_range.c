#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*array_range -create array of int
*@min: int
*@max: int
*Return: 0
*/
int *array_range(int min, int max)
{
	int i = 0;
	int *p;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
