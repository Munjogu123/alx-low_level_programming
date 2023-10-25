#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: if end of string return 0. Otherwise return length
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
