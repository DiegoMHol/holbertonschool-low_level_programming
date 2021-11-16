#include "lists.h"
/**
*print_listint -return all elements
*@h: point
*Return: 0
*/
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	for (len = 0; 1 == 1; len++)
	{
		if (h == NULL)
		{
			break;
		}
		while (h)
		{
			printf("[%d]\n", h->n);
			h = h->next;
			len++;
		}
	}
	return (len);
}
