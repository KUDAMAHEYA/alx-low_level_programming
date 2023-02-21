#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
	char Alpha;

	for (Alpha = 'a'; Alpha <= 'z'; Alpha++)
	{
		putchar(Alpha);
	}

	for (Alpha = 'A'; Alpha <= 'Z'; Alpha++)
	{
		putchar(Alpha);
	}

	putchar('\n');

	return (0);
}
