#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: operand
 */
void puts_half(char *str)
{
	int i, len;

	i = 0;
	while (str[i] != '\0')
		i++;
	len = i;

	if ((len + 1) % 2 != '\0')
		len = (len - 1) / 2;
	else
		len = len / 2;

	len++;

	for (i = len; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
