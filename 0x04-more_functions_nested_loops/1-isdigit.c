#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: digit to be checked
 *
 * Return: return 1 if it is a digit. Otherwise return 0
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
