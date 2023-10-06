#include <stdio.h>
/**
 *main - Entry point
 *
 *int b - will contain the alphabet
 *putchar - display the alphabet in reverse order in stdout
 *
 *Return: always return 0 (Success)
 */
int main(void)
{
	int b;

	for (b = 'z'; b >= 'a'; --b)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}

