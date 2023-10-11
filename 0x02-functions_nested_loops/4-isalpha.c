#include "main.h"

/**
 * _isalpha - checks for alphabetic character (lowercase and uppercase)
 * @c: character to be checked
 *
 *Return: if it is a character return 1. Otherwise 0
 */
int _isalpha(int c)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}

	for (j = 'A'; j <= 'Z'; j++)
	{
		if (c == j)
			return (1);
	}

	return (0);
}
