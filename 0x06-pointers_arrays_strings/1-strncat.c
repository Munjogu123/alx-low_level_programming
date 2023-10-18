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
 * *_strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: limit for src string
 *
 * Return: return destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len1;

	len1 = _strlen(dest);

	for (i = 0; i < n; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest [len1] = '\0';
	return (dest);
}
