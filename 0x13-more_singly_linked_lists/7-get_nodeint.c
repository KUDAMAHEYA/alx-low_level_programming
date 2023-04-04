#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that returns the nth node
 * of a listint_t linked list
 * @head: Pointer to a list.
 *
 * Return: if the node does not exist, return NULL
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
