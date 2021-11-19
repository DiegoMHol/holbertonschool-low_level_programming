#include "main.h"
/**
*binary_to_uint -Converts binary to unsigned int
*@b: point to string
*Return: 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int j;

	if (!b)
	{
		return (0);
	}

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
		{
			return (0);
		}
		i = 2 * i + (b[j] - '0');
	}
	return (i);
}
