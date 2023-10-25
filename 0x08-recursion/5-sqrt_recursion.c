#include "main.h"

/**
 * helper_function - finds the sqrt of a number
 * @n: number to get the square root
 * @root: square root of n
 *
 * Return: return square root if it is a perfect square. Otherwise 0
 */
int helper_function(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);

	return (helper_function(n, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to get its square root
 *
 * Return: if n is less than 0 return -1. Otherwise return sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper_function(n, 0));
}
