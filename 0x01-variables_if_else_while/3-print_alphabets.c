#include <stdio.h>
/**
*main -Alfhabet print
*Return: 0
*/
int main(void)
{
	int ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar (ch);
	putchar ('\n');
	return (0);
}
