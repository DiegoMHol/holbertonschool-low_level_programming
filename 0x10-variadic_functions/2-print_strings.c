#include "variadic_functions.h"
#include <stdio.h>
/**
*print_strings -print string
*@separator: char
*@n: int
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;
	char *p;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(li, char*);
		if (p == 0)
		{
			printf("(nil)");
		}
		if (i == n - 1)
		{
			printf("%s", p);
		}
		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s%s", p, separator);
			}
			else
			{
				printf("%s", p);
			}
		}
	}
	va_end(li);
	printf("\n");
}
