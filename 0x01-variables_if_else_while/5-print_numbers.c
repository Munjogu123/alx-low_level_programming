#include <stdio.h>
/**
 *main - Entry point
 *
 *int i - contains the digits '0-9'
 *printf - prints numbers '0-9'
 *
 *Return: always return 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
		printf("\n");
	}
	return (0);
}
