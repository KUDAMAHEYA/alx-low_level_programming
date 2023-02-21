#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char Alpha;

	for (Alpha = 'a'; Alpha <= 'z'; Alpha++)
	{
		if (Alpha != 'e' && Alpha != 'q')
		{
			putchar(Alpha);
		}
	}

	putchar('\n');

	return (0);
}
