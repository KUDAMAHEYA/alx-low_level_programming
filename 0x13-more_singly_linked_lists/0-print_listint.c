#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: linked list header
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t non = 0;

	while (h)
	{
		printf("%d\n", h->n);
		non++;
		h = h->next;
	}

	return (non);
}
