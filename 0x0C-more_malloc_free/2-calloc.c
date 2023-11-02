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
	void *result = NULL;

	result = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (result == 0)
		return (NULL);
	return (result);
}
