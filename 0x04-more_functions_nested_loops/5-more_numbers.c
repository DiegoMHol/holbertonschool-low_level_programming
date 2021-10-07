#include "main.h"
/**
*more_numbers - 10 times 0 to 14
*Return: 0
*/
void more_numbers(void)
{
	int vue, n;

	for (vue = '0'; vue <= '9'; vue++)
	{
		for (n = '0'; n <= '9'; n++)
			_putchar(n);
		_putchar('\n');
	}
}
