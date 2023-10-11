#include "main.h"

/**
 * times_table - prints the 9 times table
 * int i, j - their products lead to the development of the times table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(j * i);

			
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
