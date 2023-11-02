#include "main.h"
#include <stdlib.h>

/**
 */
int *array_range(int min, int max)
{
	int i;
	int *result = NULL;

	if (min > max)
		return (NULL);

	result = malloc(max - min);
	if (result == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		*(result + i);

	return (result);
}
