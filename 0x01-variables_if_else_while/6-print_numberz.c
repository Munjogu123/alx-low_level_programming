#include <stdio.h>
/**
 *main - Entry point
 *
 *int a - holds ascii values for '0-9'
 *putchar - prints '0-9'
 *
 *Return: always return 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	return (0);
}
