#include <stdio.h>
/**
 *main - Entry point
 *
 *int ch - declares a variable that will contain alphabet
 *putchar - prints the alphabet to stdout
 *
 *Return: always return 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
