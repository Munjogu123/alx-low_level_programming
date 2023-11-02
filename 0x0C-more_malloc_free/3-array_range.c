#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: starting point
 * @max: ending point
 *
 * Return: returns the array
 */
int *array_range(int min, int max)
{
	int i, len;
	int *result = NULL;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	result = (int *)malloc(sizeof(int) * len);
	if (result == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		result[i] = min++;

	return (result);
}
