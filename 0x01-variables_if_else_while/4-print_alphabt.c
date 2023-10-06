#include <stdio.h>
/**
 *main- Entry point
 *
 *ch - holds the alphabet characters
 *continue - omits 'e' and 'q'
 *
 *Return: always return 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
