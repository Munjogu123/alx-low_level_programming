#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: determines the length of the line
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n == 0 && n < 0)
			_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}
