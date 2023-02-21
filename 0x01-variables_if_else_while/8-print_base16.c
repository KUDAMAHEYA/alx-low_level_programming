#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char hd;

	for (hd = '0'; hd <= '9'; hd++)
	{
		putchar(hd);
	}

	for (hd = 'a'; hd <= 'f'; hs++)
	{
		putchar(hd);
	}

	putchar('\n');

	return (0);
}
