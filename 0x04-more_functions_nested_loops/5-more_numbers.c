#include "main.h"
/**
*more_numbers - 10 times 0 to 14
*Return: 0
*/
void more_numbers(void)
{
	int vue, n;

	for (vue = 0; vue < 10; vue++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
			_putchar('0' + n / 10);
			}
		_putchar('0' + n % 10);
	}
	_putchar('\n');	
	}
}
