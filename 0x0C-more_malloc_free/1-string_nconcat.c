#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*string_nconcat -concatenate 2 stings
*@s1: char
*@s2: char
*@n: int
*Return: 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k = 0, l = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	p = malloc(sizeof(char) * (i + n + 1));
	if (p == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		p[k] = s1[k];
	}

	for (l = 0; s2[l] != '\0' && l != n; l++, i++)
	{
		p[i] = s2[l];
	}
	p[i] = '\0';
	return (p);
}
