#include "lists.h"
/**
 *get_dnodeint_at_index -Return nth node
 *@head: pont
 *@index: index
 *Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		else
		{
			head = head->next;
		}
		i++;
	}
	return (head);
}
