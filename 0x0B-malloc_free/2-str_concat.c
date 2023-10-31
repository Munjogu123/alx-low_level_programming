#include "main.h"
#include <stdlib.h>

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
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: return concatenated string. Otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len1, len2;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	concat = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		concat[i] = s2[j];

	concat[len1 + len2] = '\0';
	return (concat);
}
