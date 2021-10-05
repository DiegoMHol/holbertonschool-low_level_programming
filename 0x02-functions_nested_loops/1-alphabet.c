#include <stdio.h>
#include "main.h"
/**
*print_alphabet -Alphabet lowercase
*Return: 0
*/
void print_alphabet(void)
{
	int al;

	for (al = 'a'; al <= 'z'; al++)
	_putchar(al);
	_putchar('\n');
}
