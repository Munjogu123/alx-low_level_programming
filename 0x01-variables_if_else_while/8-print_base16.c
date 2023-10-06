#include <stdio.h>
/**
 *main - Entry point
 *
 *int x - contains numbers '0-9'
 *int y - contains letters 'a-f'
 *putchar - prints both x and y data to stdout
 *
 *Return: always return 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (y = 97; y <= 102; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
