#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		conc = malloc(sizeof(char) * (len1 + n + 1));
	else
		conc = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!conc)
		return (NULL);

	while (i < len1)
	{
		conc[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		conc[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		conc[i++] = s2[j++];

	conc[i] = '\0';

	return (conc);
}
