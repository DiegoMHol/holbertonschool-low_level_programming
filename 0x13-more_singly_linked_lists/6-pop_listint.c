#include "lists.h"
/**
*pop_listint -delate head node
*@head: head
*Return: 0
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n2;

	if (!head)
	{
		return (0);
	}
	tmp = (*head)->next;
	n2 = (*head)->n;
	free(*head);
	*head = tmp;

	return (n2);
}
