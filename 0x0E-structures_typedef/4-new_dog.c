#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string to be tested for its length
 *
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *s;

	s = malloc(sizeof(char) * (_strlen(owner) + 1));
}
