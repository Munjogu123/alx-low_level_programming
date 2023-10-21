#include "main.h"

/**
 * *_strncpy - copies value of a string
 * @dest: destination string
 * @src: source string
 * @n: copies values upto n
 *
 * Return: returns value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
