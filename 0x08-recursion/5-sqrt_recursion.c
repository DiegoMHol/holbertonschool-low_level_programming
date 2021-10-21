#include "main.h"
/**
*sqrt_one -natural square root of number
*@n: int
*@i: int
*Return: 0
*/
int sqrt_one(int n, int i)
{
	if ((i * i) == n)
	{
		return (i);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}
	return (sqrt_one(n, i + 1));
}
/**
*_sqrt_recursion -square num
*@n: 0
*Return: 0
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_one(n, 0));
}
