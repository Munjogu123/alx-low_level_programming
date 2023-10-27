#include <stdio.h>
#include "main.h"

/**
 * main - prints the no of arguments
 * @argc: arguments passed
 * @argv: array of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;

	return (0);
}
