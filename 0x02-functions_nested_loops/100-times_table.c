#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: operand
 */
void print_times_table(int n)
{
	int i, j, k, ones, tens_1, tens_2, hundreds;

	for (i = 0; i <= n; i++)
	{
		if (n > 15 || n < 0)
		{
			continue;
		} else
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				tens_1 = k / 10;
				tens_2 = (k % 100) / 10;
				hundreds = k / 100;
				ones = k % 10;
				if (j < n && k <= 9)
				{
					_putchar(k + '0');
					_putchar(',');
					_putchar(' ');
				} else if (j < n && k > 99)
				{
					_putchar(hundreds + '0');
					_putchar(tens_2 + '0');
					_putchar(ones + '0');
					_putchar(',');
					_putchar(' ');
				} else if (j < n && k > 9)
				{
					_putchar(tens_1 + '0');
					_putchar(ones + '0');
					_putchar(',');
					_putchar(' ');
				} else if (j == n && k > 99)
				{
					_putchar(hundreds + '0');
					_putchar(tens_2 + '0');
					_putchar(ones + '0');
				} else if (j == n && k > 9)
				{
					_putchar(tens_1 + '0');
					_putchar(ones + '0');
				} else
				{
					_putchar(k + '0');
				}
			}
			_putchar('\n');
		}
	}
}
