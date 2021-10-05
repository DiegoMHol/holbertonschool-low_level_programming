#include <stdio.h>
#include "main.h"
/**
*print_alphabet_x10 -Alphabet lowercase x10
*Return: 0
*/
void print_alphabet_x10(void)
{
	int al, n;

	for (n = 0; n <= 10; n++)
	{
		for (al = 'a'; al <= 'z'; al++)
		_putchar(al);
		_putchar('\n');
	}
}
