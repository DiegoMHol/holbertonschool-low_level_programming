#include "main.h"
/**
*_putchar -print _putchar
*Return: 0
*@c: The character to print
*/
int main(void)
{
	char *var = "_putchar";

	while (*var)
	{
		_putchar(*var);
		var++;
	}
	_putchar('\n');
	return (0);
}
