#include "main.h"
/**
*print_last_digit - las digit print
*@d: a
*Return: 0
*/
int print_last_digit(int d)
{
	int a, b;

	a = d % 10;
	if (a < 0)
	{
	a = -a;
	}
	b = '0' + a;
	_putchar(b);
	return (a);
}
