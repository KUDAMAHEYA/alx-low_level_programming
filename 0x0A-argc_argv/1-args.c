#include <stdio.h>
#include "main.h"
/**
 * main - Prints the number of arguments passed to it.
 * @argc: The number of arguments given to programm
 * @argv: An array of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

