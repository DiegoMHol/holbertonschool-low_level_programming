#include "lists.h"
/**
*delete_nodeint_at_index -delete the node at index
*@head: head
*@index: idnex
*Return: 0
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *now, *next;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	now = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (now->next == NULL)
		{
			return (-1);
		}
		now = now->next;
	}
	next = now->next;
	now->next = next->next;
	free(next);
	return (1);
}
