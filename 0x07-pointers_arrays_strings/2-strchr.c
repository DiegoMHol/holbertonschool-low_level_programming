#include "main.h"
/**
*_strchr -locates a char in string
*@s: char
*@c: char
*Return: 0
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i != 0; i++)
	{
		s[i] = c;
	}
	return (s);
}
