#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98
 * @n: number from which printing starts
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	} else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d, ", j);
		}
	}
	printf("\n");
}
