#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character to be filled in array
 *
 * Return: NULL if size equals 0. Otherwise return pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	if (size == 0)
		return (NULL);

	x = (char *)malloc(sizeof(char) * size);

	if (x == 0)
		return (0);

	for (i = 0;  i < size; i++)
		*(x + i) = c;

	return (x);
}
