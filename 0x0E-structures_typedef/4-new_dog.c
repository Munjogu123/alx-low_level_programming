#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - function that returns the length of a string
 * @s: string to be tested for its length
 *
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strcpy - copies src to dest
 * @dest: destination string
 * @src: source string
 *
 * Return: returns pointer to copied string
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - new dog created
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: returns the elements of the type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2;
	dog_t *scooby;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	scooby = malloc(sizeof(dog_t));
	if (scooby == NULL)
		return (NULL);

	scooby->name = malloc(sizeof(char) * (len1 + 1));
	if (scooby->name == NULL)
	{
		free(scooby);
		return (NULL);
	}

	scooby->owner = malloc(sizeof(char) * (len2 + 1));
	if (scooby->owner == NULL)
	{
		free(scooby);
		free(scooby->name);
		return (NULL);
	}

	scooby->age = age;
	_strcpy(scooby->name, name);
	_strcpy(scooby->owner, owner);
	return (scooby);
}
