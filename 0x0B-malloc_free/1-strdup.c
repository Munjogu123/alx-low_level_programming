#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be replaced
 *
 * Return: NULL if str equals to NULL. Otherwise replaced string
 */
char *_strdup(char *str)
{
	char *replace;
	int i;

	if (str == NULL)
		return (NULL);

	replace = (char *)malloc(sizeof(char) * (_strlen(str) + 1));
	if (replace == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		replace[i] = str[i];

	return (replace);
}
