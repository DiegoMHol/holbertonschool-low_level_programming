#include "lists.h"
/**
 *dlistint_len -Return num of a list
 *@h: ppoin
 *Return: num of elemnt
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *element = h;
	size_t i = 0;

	while (element != NULL)
	{
		element = element->next;
		i++;
	}
	return (i);
}
