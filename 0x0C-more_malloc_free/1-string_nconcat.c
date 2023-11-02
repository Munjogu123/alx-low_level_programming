#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function that returns the length of a string
 * @s: string to be tested for its length
 *
 * Return: returns length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: length of s2
 *
 * Return: return concatenated string. Otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, lens2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	lens2 = _strlen(s2);
	if (n > lens2)
		n = lens2;

	j = _strlen(s1) + n;
	concat = malloc(j + 1);

	if (concat == NULL)
		return (NULL);


	for (i = 0; i < j; i++)
	{
		if (i < _strlen(s1))
			concat[i] = s1[i];
		else
			concat[i] = s2[i - (_strlen(s1))];
	}

	concat[i] = '\0';
	return (concat);
}
