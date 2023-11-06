#include "main.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: structure for the dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
