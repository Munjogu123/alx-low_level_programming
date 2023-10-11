#include "main.h"

/**
 * _islower - checks whether character is lowercase
 * @c: character to be checked
 *
 *Return: if character is lowercase return 1. Otherwise 0
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
