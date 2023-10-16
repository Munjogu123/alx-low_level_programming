#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i, j, k;

	j = 0;

	while (s[j] != '\0')
		j++;

	k = j;

	for (i = k - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
