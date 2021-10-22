#include <stdio.h>
#include <stdlib.h>
/**
*main -print its name
*@argc: argument count
*@argv: argument vector
*Return: 0
*/
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul += atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}

	return (0);
}
