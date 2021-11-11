#include "lists.h"
#include <stdio.h>
/**
*add_node -function to add new node at beggingin of list
*@head: struct
*@str: arg
*Return: addres of new elent
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	else
	{
		while (str[i] != 0)
		{
			i--;
		}
		new->len = i;
		new->str = strdup(str);
		new->next = *head;
		*head = new;
	}
	return (*head);
}
