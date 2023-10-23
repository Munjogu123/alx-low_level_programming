#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: destination string
 * @b: byte to fill buffer
 * @n: size of byte
 *
 * Return: returns the destination string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
