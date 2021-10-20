#include "main.h"
/**
*_strlen_recursion -return length of srting
*@s: char
*Return: 0
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == 0)
	{
		return ('\0');
	}
	else
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
