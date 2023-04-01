#include "lists.h"
#include <stdlib.h>

/**
 * list_len - a function that returns the number of
 * elements in a linked list_t list.
 * @h: Pointer to a list.
 * Return: Int 0
 **/

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
