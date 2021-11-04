#include "variadic_functions.h"
#include <stdio.h>
/**
*print_numbers -print numbers
*@separator: char
*@n: int
*Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;
	int j;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(li, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(li, unsigned int);
		if (i < n - 1)
		{
			printf("%d%s", j, separator);
		}
		if (i == n - 1)
		{
			printf("%d", j);
		}
	}
	printf("\n");
	va_end(li);
}
