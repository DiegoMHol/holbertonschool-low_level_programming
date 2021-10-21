#include "main.h"
/**
*prime -return prime
*@n: int
*@count: count
*Return: 0
*/
int prime(int n, int count)
{
	if (n == count)
		return (1);
	if ((n % count) != 0)
	{
		return (prime(n, count + 1));
	}
	else
		return (0);
}
/**
*is_prime_number -prime number
*@n: int
*Return: 0
*/
int is_prime_number(int n)
{
	int count = 0;

	if (n == 1 && n == -1)
		return (0);
	return (prime(n, count));
}
