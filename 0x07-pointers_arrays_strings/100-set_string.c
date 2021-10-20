#include "main.h"
/**
*set_string -set value of pointer to char
*@s: char
*@to: char
*Return: 0
*/
void set_string(char **s, char *to)
{
	int i = 0;

	for (; s[i] != to; i++)
	{
		s[i] = to;
	}
}
