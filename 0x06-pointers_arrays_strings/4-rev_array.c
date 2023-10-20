#include "main.h"

/**
 * reverse_array - reverses contents of an array
 * @a: array of elements
 * @n: no of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		if (i > 0)
		{
			if (a[i] <= 9)
			{
				_putchar(a[i] + '0');
				_putchar(',');
				_putchar(' ');
			} else if (a[i] <= 99)
			{
				_putchar((a[i] / 10) + '0');
				_putchar((a[i] % 10) + '0');
				_putchar(',');
				_putchar(' ');
			} else if (a[i] <= 999)
			{
				_putchar((a[i] / 100) + '0');
				_putchar((a[i] % 10) / 10 + '0');
				_putchar((a[i] % 10) + '0');
				_putchar(',');
				_putchar(' ');
			} else if (a[i] <= 9999)
			{
				_putchar((a[i] / 1000) + '0');
				_putchar((a[i] % 1000) / 100 + '0');
				_putchar((a[i] % 100) / 10 + '0');
				_putchar((a[i] % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		} else
		{
			_putchar(a[i] + '0');
		}
	}
	_putchar('\n');
}
