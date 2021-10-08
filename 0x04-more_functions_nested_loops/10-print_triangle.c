#include "main.h"
/**
*print_triangle -print trianel
*@size: size triangle
*Return: 0
*/
void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 0; b <= (size - a - 1); b++)
			{
				_putchar(' ');
			}
			for (c = 0; c <= a - 1; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
