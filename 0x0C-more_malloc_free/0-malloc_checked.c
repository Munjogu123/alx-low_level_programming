#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 */
void *malloc_checked(unsigned int b)
{
	void *s = NULL;

	s = malloc(b);
	if (s == NULL)
		return (NULL);

	return (s);
}
