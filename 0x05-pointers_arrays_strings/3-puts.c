#include "main.h"
/**
*_puts -print a string
*@str: char str
*Return: 0
*/
void _puts(char *str)
{
	while (*str)
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
