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
 * *_strcat - concatenates two strings
* @dest: first string
 * @src: second string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	j = _strlen(src);

	for (i = 0; dest[i] != '\0'; i++)
	{
		src[i + j] = dest[i];
	}
	src[i + j] = '\0';
}
