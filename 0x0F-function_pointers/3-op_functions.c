#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds @a and @b
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - produces the difference of @a and @b
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: difference of @a and @b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies @a and @b
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: product of @a and @b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides @a by @b
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: result of the division @a and @b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the remainder of the division between @a and @b
 *
 * @a: intput 1
 * @b: input 2
 *
 * Return: the remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
