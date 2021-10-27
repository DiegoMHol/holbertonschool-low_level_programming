#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*alloc_grid -return pointer to 2 dimesion array
*@width: int
*@height: int
*Return: 0
*/
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc((height * sizeof(*p)));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc((width * sizeof(**p)));

		if (p[i] == NULL)
		{
			i--;
			for (; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			p[j][k] = 0;
		}
	}
	return (p);
}
