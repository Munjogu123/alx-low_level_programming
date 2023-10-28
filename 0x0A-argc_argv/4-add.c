#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: arguments
 * @argv: array of arguments
 *
 * Return: return 0 if succcess. Otherwise return 1
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = 0;
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
