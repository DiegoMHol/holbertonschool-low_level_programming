#include "lists.h"
/**
*listint_len -Return number of elemnts
*@h: struct
*Return: 0
*/
size_t listint_len(const listint_t *h)
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
