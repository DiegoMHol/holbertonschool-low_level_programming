#include "main.h"
/**
*_strcpy -copie string
*@src: char
*@dest: char
*Return: 0
*/
#include "main.h"
#include <stdio.h>
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	for (a = 0; src[a]; a++)
	dest[a] = src[a];
	dest[a] = src[a];
	return (dest);
}
