#include <stdio.h>

/**
 * main - prints sum of multiples of 3 or 5 below 1024
 * Return: always 0
 */
int main(void)
{
	int i, n, sum;

	n = 1024;
	sum = 0;

	for (i = 1; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
