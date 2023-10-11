#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: number to be checked
 * result - stores last digit of positive number
 * result_new - stores last digit of negative number
 *
 * Return: return the last digit of number stored in result and result_new
 */
int print_last_digit(int x)
{
	int result = x % 10;
	int result_new;

	if (x < 0)
	{
		result_new = (x + (x * -2)) % 10;
		return (result_new);
	}

	return (result);
}
