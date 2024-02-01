#include "hash_tables.h"

/**
 * key_index - gives the storage index in the array
 * @key: the key, string
 * @size: size of the array
 *
 * Return: index to store the key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
