#include <stdio.h>
/**
*main -Alfhabet print
*Return: 0
*/
int main(void)
{
	int var;

	for (var = 0; var <= 9; var++)
	{
	putchar(var + '0');
	if (var < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
		return (0);
}
