#include "lists.h"
/**
*add_nodeint_end -add node at end
*@head: head
*@n: point
*Return: 0
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node1, *node2;

	node1 = *head;

	node2 = malloc(sizeof(listint_t));
	if (node2 == NULL)
	{
		free(node2);
		return (NULL);
	}

	node2->n = n;
	node2->next = NULL;

	if (!*head)
	{
		*head = node2;
		return (node2);
	}
	while (node1->next)

		node1 = node1->next;
	node1->next = node2;

	return (node2);

}
