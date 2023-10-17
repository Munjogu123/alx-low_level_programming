#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j, k, len;

	i = 0;
	while (s[i] != '\0')
		i++;
	len = i;

	for (j = 0; j < len / 2; j++)
	{
		k = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = k;
	}
}
