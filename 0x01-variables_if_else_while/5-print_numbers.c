#include <stdio.h>

/**
 * main -  digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int digitnum;

	for (digitnum = 0; digitnum < 10; digitnum++)
		printf("%d", digitnum);
	putchar('\n');
	return (0);
}
