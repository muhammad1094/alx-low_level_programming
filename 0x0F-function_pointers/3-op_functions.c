#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two integers
 * @a: first int
 * @b: second int
 *
 * Return: Sum of two integers
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first int
 * @b: second int
 *
 * Return: the difference of two integers
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first int
 * @b: second int
 *
 * Return: the multiplication of two integers
*/

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides two integers
 * @a: first int
 * @b: second int
 *
 * Return: the division of two integers
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo two integers
 * @a: first int
 * @b: second int
 *
 * Return: the remainder of two integers
*/

int op_mod(int a, int b)
{
	return (a % b);
}
