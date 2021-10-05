#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
*main -print _putchar
*Return: 0
*/
int main(void)
{
	char _putchar[] = "_putchar";

	for (int i = 0; i < 8; ++i)
	_putchar(_putchar);
	_putchar('\n');
	return (0);
}
