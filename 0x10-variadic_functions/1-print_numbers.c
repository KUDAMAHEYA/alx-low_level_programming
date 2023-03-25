#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: string
 * @n: number of integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list ng;
unsigned int i;

va_start(ng, n);

for (i = 0; i < n; i++)
{


printf("%d", va_arg(ng, int));

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ng);

}
