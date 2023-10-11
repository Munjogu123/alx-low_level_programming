#include "main.h"

/**
 * times_table - prints the 9 times table
 * int i, j - their products lead to the development of the times table
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			n = j * i;
			if (n <= 9)
			{
				_putchar(' ');
			} else if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
