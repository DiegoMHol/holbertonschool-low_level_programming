#include <stdio.h>
#include <stdlib.h>
/**
*_strdup -returns pointer to newly space memory
*@str: char
*Return: 0
*/
char *_strdup(char *str)
{
	int i;
	int j = 0;
	char *p;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
