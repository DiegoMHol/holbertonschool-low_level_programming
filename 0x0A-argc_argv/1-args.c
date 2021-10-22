#include <stdio.h>
/**
*main -print number of arguments
*@argc: argument count
*@argv: argument vector
*Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	if (argc >= 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%d\n", i);
		}
	}

	return (0);
}
