#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: no to get its factorial
 * Return: return factorial of no greater or equal to 0. Otherwise -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
