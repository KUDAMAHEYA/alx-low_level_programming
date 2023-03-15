#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function that returns a pointer to a newly allocated
 * space in memory which contains a copy of the
 * string given as a parameter.
 * @str: string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *csr;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	csr = malloc(sizeof(char) * (len + 1));

	if (csr == NULL)
		return (NULL);

	while ((csr[i] = str[i]) != '\0')
		i++;

	return (csr);
}
