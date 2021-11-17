#include "lists.h"
/**
*sum_listint -sum of data
*@head: head
*Return: 0
*/
int sum_listint(listint_t *head)
{
	while (head != NULL)
	{
		return (head->n + sum_listint(head->next));
	}

	return (0);
}
