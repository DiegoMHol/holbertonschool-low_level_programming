#include "main.h"
/**
*print_line - print n times ____
*@n: integrer
*Return: 0
*/
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');

	for (n = '0'; n <= '9'; n++)
	_putchar('_');
	_putchar('\n');
}
