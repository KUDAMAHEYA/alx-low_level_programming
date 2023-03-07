#include "main.h"
#include <stdio.h>

/**
 * *_strstr - a function that locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (k = 0; needle[k] != '\0'; k++)
		{
			if (haystack[i + k] != needle[k])
				break;
		}
		if (!needle[k])
			return (&haystack[i]);
	}
	return (NULL);
}
