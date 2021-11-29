#include "main.h"
#include <stdio.h>
/**
*get_endianness -chek the endianness
*Return: 0
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *y = (char *)&i;

	if (*y)
		return (1);
	else
		return (0);
}
