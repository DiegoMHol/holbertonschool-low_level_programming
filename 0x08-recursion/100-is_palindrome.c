#include "main.h"
/**
*is_palindrome -natural square root of number
*@s: int
*Return: 0
*/
int is_palindrome(char *s)
{
	char i = 0;

	if (*s == 0)
	{
		return (0);
	}
	else
	{
		i += is_palindrome(s - 1);
		return (1);
	}
}
