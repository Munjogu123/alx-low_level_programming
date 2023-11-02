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
	int i, j, k, len;

	k = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (k < 0)
		return (NULL);

	if (k >= _strlen(s2))
		k = _strlen(s2);

	len = (_strlen(s1) + k + 1);

	concat = (char *) malloc(len * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (j = 0; j <= k; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';

	return (concat);
}
