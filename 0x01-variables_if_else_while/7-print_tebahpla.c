#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char rvs;

	for (rvs = 'z'; rvs >= 'a'; rvs--)
	{
		putchar(rvs);
	}

	putchar('\n');

	return (0);
}
