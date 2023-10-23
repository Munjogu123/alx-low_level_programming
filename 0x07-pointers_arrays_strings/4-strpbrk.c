#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be located
 *
 * Return: return string if character is found. Otherwise return NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string used for search
 *
 * Return: return string if it matches. Otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s) != NULL)
			return (s);
		s++;
	}
	return (NULL);
}
