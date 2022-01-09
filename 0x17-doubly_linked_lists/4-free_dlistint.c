#include "lists.h"
/**
 *free_dlistint -free list
 *@head: point
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
	free(head);
}
