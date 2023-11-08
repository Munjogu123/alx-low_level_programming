#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns result of operations
 * @argc: no of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	result = get_op_func(argv[2]);

	if (!result)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", result(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
