#include "lists.h"
/**
*get_nodeint_at_index -return the nth node
*@head: head
*@index: index
*Return: 0
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < index)
		{
			if (head == 0)
			{
				return (head);
			}
			else
			{
				head = head->next;
				i++;
			}
		}
		return (head);
	}
}
