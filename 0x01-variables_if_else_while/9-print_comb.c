#include <stdio.h>
/**
 *main - Entry point
 *
 *int x -contains digits '0-9'
 *putchar - prints the digits '0-9'
 *
 *Return: always return 0 (success)
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar (',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
