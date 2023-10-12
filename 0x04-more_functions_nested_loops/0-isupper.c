#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 *
 * Return: if uppercase return 1. Otherwise return 0
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
