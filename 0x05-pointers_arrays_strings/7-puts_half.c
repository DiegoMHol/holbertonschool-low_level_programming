#include "main.h"
/**
*puts_half -print half string
*@str: string
*Return: 0
*/
void puts_half(char *str)
{
	int a = 0;
	int b = 0;

	for (b = 0; str[b] != '\0'; b++)
	{
	}

	a = b / 2;
	if (b % 2)
		a = a + 1;

	for (; a < b; a++)
		_putchar(str[a]);

	_putchar('\n');
}
