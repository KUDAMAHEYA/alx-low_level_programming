#include "lists.h"

/**
 * list_len - a function that returns the number of
 * elements in a linked list_t list.
 * @h: Pointer to a list.
 * Return: Int 0
 **/

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int c = 0;

	temp = h;
	while (temp)
	{
		c++;
		temp = temp->next;
	}
	return (c);
}
