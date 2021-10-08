#include <stdio.h>
/**
*main -print factor
*Return: 0
*/
int main(void)
{
	unsigned long int a, b;

	a = 612852475143;
	for (b = 3; b < (a / 2); b = b + 2)
	{
		while ((a % b == 0) && (a != b))
			a = a / b;
	}
	printf("%lu\n", a);
	return (0);
}
