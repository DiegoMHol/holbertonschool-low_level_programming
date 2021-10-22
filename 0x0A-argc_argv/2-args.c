#include <stdio.h>
/**
*main -print its name
*@argc: argument count
*@argv: argument vector
*Return: 0
*/
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		if (argc >= 0)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
