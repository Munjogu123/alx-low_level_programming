#include "main.h"
#include <stddef.h>

/**
 * *_strstr - locates a substring
 * @haystack: source string
 * @needle: search string
 *
 * Return: return substring that matches. Otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
			return (haystack);
		haystack++;
	}
	if (*needle == '\0')
		return (haystack);

	return (NULL);
}
