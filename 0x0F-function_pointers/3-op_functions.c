#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
*op_add - Returns the sum of two numbers
*@a:the first number
*@b:the second number
*
*Return:The sum of a and b
*/

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - calculates the difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the multiple of two char
 * @a: char1
 * @b: char2
 *
 *  Return: ab
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
*op_mod - Returns the remainder of the division of two numbers.
*@a: int1
*@b: int2
*
*Return: The remainder of the division of a by b.
*/
int op_mod(int a, int b)
{
return (a % b);
}
