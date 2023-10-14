#include <stdio.h>

/**
 * main - prints fibonacci series
 * Return - return 0 (success)
 */
int main(void)
{
	long int a, b, i, n, sum;

	a = 1;
	b = 2;
	n = 50;

	for (i = 1; i <= n; i++)
	{
		if (i < n)
			printf("%ld, ", a);
		else
			printf("%ld", a);
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
