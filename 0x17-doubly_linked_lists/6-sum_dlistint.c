#include "lists.h"
/**
 *sum_dlistint -Sum of data of list
 *@head: point
 *Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int i;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		i = 0;
		while (head != NULL)
		{
			i = i + head->n;
			head = head->next;
		}
		return (i);
	}
}
