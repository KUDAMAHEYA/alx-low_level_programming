#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in
 * a linked listint_t list.
 * @h: ponter list
 *
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int noe = 0;

	tp = h;
	while (tp)
	{
		noe++;
		tp = tp->next;
	}
	return (noe);
}
