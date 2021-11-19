#include "main.h"
/**
*binary_to_uint -Converts binary to unsigned int
*@b: point to string
*Return: 0
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j = 0;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		j = 2 * j + (b[i] - '0');
	}
	return (j);
}
