#include "lists.h"
/**
 *
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int i = 0;

	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));
	if (idx > 0 && *h == NULL)
		return (NULL);
	while (i < idx && tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp->next == NULL && i + 1 == idx)
		return (add_dnodeint_end(h, n));
	else if (i + 1 < idx)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = tmp->prev;
	new->next = tmp;
	tmp->prev->next = new;
	tmp->prev = new;
	return (tmp);
}
