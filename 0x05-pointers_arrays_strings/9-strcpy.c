#include "main.h"

/**
 * *_strcpy - copies string pointed to dest
 * @dest: where string is copied to
 * @src: where string is copied from
 *
 *Return: returns the destination of the string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
