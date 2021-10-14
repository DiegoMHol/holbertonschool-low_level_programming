#include "main.h"
/**
*_strncpy -copie a string
*@dest: char
*@src: char
*@n: int
*Return: 0
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for ( ; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
