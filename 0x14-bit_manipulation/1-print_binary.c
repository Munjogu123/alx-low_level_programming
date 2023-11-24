#include "main.h"

/**
 * print_binary - converts decimal to binary
 * @n: int to be converted
 */
void print_binary(unsigned long int n)
{
	int i, val;
	unsigned long int curr;

	val = 0;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;

		if (curr & 1)
		{
			_putchar('1');
			val++;
		} else if (curr)
			_putchar('0');
	}
	if (!curr)
	_putchar('0');
}
