#include "main.h"
/**
*print_binary -print binary representation od num
*@n: int
*/
void print_binary(unsigned long int n)
{
	char c;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	print_binary(n >> 1);
	c = (n & 1) ? '1' : '0';
	_putchar(c);
}
