#include "lists.h"
/**
 *print_dlistint -Print all elements in list
 *@h: point
 *Return: Num of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *element = h;
	size_t i = 0;

	while (element != NULL)
	{
		printf("%i\n", element->n);
		element = element->next;
		i++;
	}
	return (i);
}
