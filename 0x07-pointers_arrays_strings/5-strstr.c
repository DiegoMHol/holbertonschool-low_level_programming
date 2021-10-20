#include "main.h"
/**
*_strstr -Write a function that locates a substring.
*@haystack: char
*@needle: char
*Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[i] && haystack[i + j] == needle[j]; j++)
		{
		}

		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (0);
}
