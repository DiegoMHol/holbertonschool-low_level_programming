#include "function_pointers.h"
#include <stdio.h>
/**
*print_name -Print name
*@name: char
*@f: functions point
*Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
