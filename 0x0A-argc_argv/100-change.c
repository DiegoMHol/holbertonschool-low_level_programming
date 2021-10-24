#include <stdio.h>
#include <stdlib.h>
/**
*main -print the coins
*@argc: argument counter
*@argv: argument vector
*Return: 0
*/
int main(int argc, char *argv[])
{
	int coin[] = {25, 10, 5, 2, 1};
	int i, j = 0;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	cents = atoi(argv[1]);
	for (i = 0; cents > 0;)
	{
		if (coin[i] > cents)
			i++;
		else
		{
			cents -= coin[i];
			j++;
		}
	}
	printf("%d\n", j);
	return (0);
}
