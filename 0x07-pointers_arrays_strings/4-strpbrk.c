#include "main.h"
/**
*_strpbrk -function that searches a string for any of a set of bytes
*@s: char
*@accept: char
*Return: 0
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
		while (s[i])
		{
			for (j = 0; accept[j]; j++)
			{
				if (s[i] == accept[j])
					return (s + i);
			}
			i++;
		}
	return (0);
}
