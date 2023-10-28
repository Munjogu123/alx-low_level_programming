#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: arguments
 * @argv: array of arguments
 * 
 * Return: return 0 if multiplication occurs. Otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
	printf("Error\n");
	return (1);
}
