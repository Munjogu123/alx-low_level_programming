#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: no of elements in the array
 * @size: size of data type
 *
 * Return: returns array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *result = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = malloc(nmemb * size);
	if (result == 0)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)(result) + i) = 0;

	return (result);
}
