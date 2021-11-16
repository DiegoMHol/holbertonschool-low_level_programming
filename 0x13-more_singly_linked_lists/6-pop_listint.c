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

	tmp = (*head)->next;
	n2 = (*head)->n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	free(*head);
	*head = tmp;

	return (n2);
}
