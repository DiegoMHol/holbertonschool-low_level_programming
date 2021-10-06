#include "main.h"
/**
*jack_bauer - print minutes of all day
*Return: 0
*/
void jack_bauer(void)
{
	int hs, min;

	for (hs = 0; hs <= 23; hs++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hs / 10);
			_putchar((hs % 10);
			_putchar(':');
			_putchar((min / 10);
			_putchar((min % 10);
			_putchar('\n');
		}
	}
}
