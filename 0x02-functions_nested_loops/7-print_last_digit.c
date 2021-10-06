#include "main.h"
/**
*print_last_digit - las digit print
*@d: a
*Return: 0
*/
int print_last_digit(int d)
{
	int lastDigit = d % 10;

	if (lastDigit < 0)
	lastDigit = -lastDigit;
	_putchar(lastDigit);
	return (0);
}
