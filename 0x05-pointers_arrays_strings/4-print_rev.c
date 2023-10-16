#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i, j, k;

	while (s[i] != '\0')
		i++;

	k = i;

	for (j = k - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
