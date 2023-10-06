#include <stdio.h>
/**
 *main - Entry point
 *
 *ch - handles alphabet in lowercase
 *ch2 - handles alphabet in uppercase
 *putchar - prints the alphabet in both cases and also a new line
 *
 *Return: always return 0 (Success)
 */
int main(void)
{
	int ch;
	int ch2;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
		putchar(ch2);
	putchar('\n');
	return (0);
}
