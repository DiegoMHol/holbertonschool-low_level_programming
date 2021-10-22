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
	int i, j;
	int sum = 0;
	char *p;

	for (i = 1; i < argc; i++)
	{
		p = argv[i];
	}
		for (j = 0; p[j] != '\0'; j++)
		{
			if (p[j] < 48 && p[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + atoi(argv[j]);
		}
	printf("%d\n", sum);
	return (0);
}
