#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first character
 * @str: string from which characters are printed
 */
void puts2(char *str)
{
	int i, j, len;
	
	j = 0;
	while (str[j] != '\0')
		j++;

	len = j;
	for (i = 0; i <= len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
