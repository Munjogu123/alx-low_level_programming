#include <unistd.h>
/**
 *main - Entry point
 *write - prints the text to stdout
 *
 *Return: always return 0 (success)
 */
int main(void)
{
	write(1, "_putchar\n", 9);

	return (0);
}
