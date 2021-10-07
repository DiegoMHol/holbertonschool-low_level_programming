#include "main.h"
/**
*more_numbers - 10 times 0 to 14
*Return: 0
*/
void more_numbers(void)
{
	int vue, n, c;

	c = 14;
	for (vue = '0'; vue <= '9'; vue++)
	{
		for (n = '0'; n <= c; n++)
			_putchar(n);
		_putchar('\n');
	}
}
