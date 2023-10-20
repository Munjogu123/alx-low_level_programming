#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: string to be converted
 *
 * Return: returns converted string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		} else if (s[i - 1] == ' ' || s[i - 1] == '.')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		} else if (s[i - 1] == '\n' || s[i - 1] == '\t')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		} else if (s[i] == '\t')
		{
			s[i] = ' ';
		}
	}
	return (s);
}
