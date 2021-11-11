#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*list_len -print list
*@h: struct
*Return: number of elements in a linked list
*/
size_t list_len(const list_t *h)
{
	size_t len = 0;

	for (len = 0; 1 == 1; len++)
	{
		if (h == NULL)
		{
			break;
		}
		h = h->next;
	}
	return (len);
}
