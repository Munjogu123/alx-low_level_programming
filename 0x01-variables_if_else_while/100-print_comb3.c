#include <stdio.h>
/**
 *main - Entry point
 *
 *int i,j - counters for the loops in the program
 *putchar - prints the digits generated in the loop
 *
 *Return: always return 0 (Success)
 */
int main(void)
{
	for (int i = 0; i <= 8; i++)
	{
		for (int j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
