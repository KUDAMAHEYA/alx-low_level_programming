#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the
 * end of a listint_t list.
 * @head: first element pointer in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ade;
	listint_t *temp = *head;

	ade = malloc(sizeof(listint_t));
	if (!ade)
		return (NULL);

	ade->n = n;
	ade->next = NULL;

	if (*head == NULL)
	{
		*head = ade;
		return (ade);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = ade;

	return (ade);
}
