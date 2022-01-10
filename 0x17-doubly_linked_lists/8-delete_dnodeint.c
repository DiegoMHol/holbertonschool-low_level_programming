#include "lists.h"
/**
 *delete_dnodeint_at_index -delate node at inx
 *@head: point
 *@index: index
 *Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (tmp == NULL || head == NULL)
	{
		return (-1);
	}
	while (i != index)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == 0)
	{
		*head = tmp->next;
	}
	if (tmp->next != NULL)
	{
		tmp->next->prev = tmp->prev;
	}
	if (tmp->prev != NULL)
	{
		tmp->prev->next = tmp->next;
	}
	free(tmp);
	return (1);
}
