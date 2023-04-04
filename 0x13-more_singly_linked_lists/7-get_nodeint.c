#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that returns the nth node of a listint_t linked list
 * @head: Pointer to a list.
 *
 * Return: if the node does not exist, return NULL
 **/

int pop_listint(listint_t **head)
{
	listint_t *nth;
	int i;

	if (*head == NULL)
		return (0);

	nth = *head;
	*head = nth->next;
	i = nth->n;
	free(nth);
	return (i);
}
