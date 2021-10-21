#include "main.h"
/**
*prime -return prime
*@n: int
*@count: count
*Return: 0
*/
int prime(int n, int count)
{
	if (count == 1)
	{
		return (1);
	}
	if (n % count == 0)
	{
		return (0);
	}
	return (prime(n, count - 1));
}
/**
*is_prime_number -prime number
*@n: int
*Return: 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n / 2));
}
