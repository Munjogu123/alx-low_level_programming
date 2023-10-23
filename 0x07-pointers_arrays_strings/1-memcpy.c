#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: prints up to n bytes
 *
 * Return: returns destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
