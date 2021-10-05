#include "main.h"
/**
*main -print _putchar
*Return: 0
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
