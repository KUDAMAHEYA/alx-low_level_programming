#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *@src: pointer to copy string
 *@dest: copy string
 *Return: to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, leng;

	for (leng = 0; src[leng] != '\0'; leng++)
	{
	}

	for (i = 0; i <= leng ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
