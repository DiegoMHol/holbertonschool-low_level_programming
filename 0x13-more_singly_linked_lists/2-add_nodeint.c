#include "lists.h"
/**
*add_nodeint -function to add new node at beggingin of list
*@head: struct
*@n: arg
*Return: addres of new elent
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
