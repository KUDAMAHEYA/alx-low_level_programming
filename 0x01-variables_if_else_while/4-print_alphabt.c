#include <stdio.h>
/**
 * main - Print all the letters except q and e
 * Return: 0
 */
int main(void)
{
	char cb;

	for (cb = 'a'; cb <= 'z'; cb++)
	{
		if (cb ! = 'e' && cb != 'q')
	        putchar(cb);
	}
	putchar('\n');
	return (0);
}
