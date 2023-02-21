#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int SN;

	for (SN = '0'; SN <= '9'; SN++)
	{
		putchar(SN);
	}

	putchar('\n');

	return (0);
}
