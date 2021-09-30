#include <stdio.h>
/**
*main - print size types
*Return: 0
*/
int main(void)
{
	int intType;
	float floatType;
	long int longInitType;
	char charType;
	long long int longLongType;
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of long init: %zu bytes\n", sizeof(longInitType));
	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of long long int: %zu byte\n", sizeof(longLongType));
	return (0);
}
