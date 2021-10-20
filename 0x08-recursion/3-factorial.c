#include "main.h"
/**
*factorial -returns factorial of a num
*@n: int
*Return: 0
*/
int factorial(int n)
{
	if (n < 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
