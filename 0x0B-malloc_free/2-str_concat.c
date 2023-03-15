#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - a function that concatenates two strings.
 * @s1: first to concatenate
 * @s2: second string to concatenate
 *
 * Return: s1 & s2
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;
	char *conca;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1_length) != '\0')
		s1_length++;

	while (*(s2 + s2_length) != '\0')
		s2_length++;

	conca = malloc(1 + (s1_length * sizeof(*s1)) + (s2_length * sizeof(*s2)));
	if (conca == NULL)
		return ('\0');

	for (i = 0; i < s1_length; i++)
		conca[i] = *(s1 + i);

	for (j = 0; j < s2_length; j++, i++)
		conca[i] = *(s2 + j);

	return (conca);
}
