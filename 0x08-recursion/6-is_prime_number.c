#include "main.h"

/**
 * helper_function - returns 1 if the input integer is a prime number
 * @n: no being checked
 * @i: checks if n is prime
 *
 * Return: if isprime return 1. Otherwise 0.
 */
int helper_function(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (helper_function(n, i - 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: no being checked if it is prime
 *
 * Return: if prime return 1. Otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (helper_function(n, n - 1));
}
