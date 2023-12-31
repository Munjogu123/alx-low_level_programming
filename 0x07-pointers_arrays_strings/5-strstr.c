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
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
