#include "main.h"
/**
*_strspn -gets length of a prefix substring
*@s: char
*@accept: char
*Return: 0
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int k = 0;

	for (; s[i] && s[i] != ' '; i++)
	{
		j = 0;

		for (; accept[j]; j++)
		{
			if (accept[j] == s[i])
				k++;
		}
	}
	return (k);
}
