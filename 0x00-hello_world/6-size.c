#include <stdio.h>
/**
*main - print size types
*Return: 0
*/
int main(void)
{
	int intType;
	float floatType;
	long int longIntType;
	char charType;
	long long int longLongType;

	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(longIntType));
	printf("Size of long long int: %zu byte\n", sizeof(longLongType));
	printf("Size of float: %zu byte\n", sizeof(floatType));
	return (0);
}
