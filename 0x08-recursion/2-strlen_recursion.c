#include "main.h"
/**
*_strlen_recursion -return length of srting
*@s: char
*Return: 0
*/
int _strlen_recursion(char *s)
{
	int i;

	if (*s == 0)
	{
		return (0);
	}
	else
	{
		i = 0;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
