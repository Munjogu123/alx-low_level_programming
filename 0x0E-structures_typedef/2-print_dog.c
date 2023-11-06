#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints contents of the structure
 * @d: structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" ");

	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
