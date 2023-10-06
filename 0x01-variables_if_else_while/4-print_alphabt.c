#include <stdio.h>
/**
 *main- Entry point
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' && ch == 'q')
		continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
