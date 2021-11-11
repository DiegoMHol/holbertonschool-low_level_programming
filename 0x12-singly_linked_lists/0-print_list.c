#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_list -print all elemnts of list_h
*@h: point
*Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t len = 0;

	for (len = 0; 1 == 1; len++)
	{
		if (h == NULL)
		{
			break;
		}
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (len);
}
