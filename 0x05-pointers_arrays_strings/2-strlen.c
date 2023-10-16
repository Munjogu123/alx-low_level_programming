#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s - string to be tested for its length
 *
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int length;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
