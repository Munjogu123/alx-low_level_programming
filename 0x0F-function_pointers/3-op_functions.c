#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - returns sum of a and b
 * @a: first operand
 * @b: second operand
 *
 * Return: returns sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of a and b
 * @a: first operand
 * @b: second operand
 *
 * Return: returns difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: first operand
 * @b: second operand
 *
 * Return: returns product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of division
 * @a: first operand
 * @b: second operand
 *
 * Return: returns result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - returns remainder of division
 * @a: first operand
 * @b: second operand
 *
 * Return: returns remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
