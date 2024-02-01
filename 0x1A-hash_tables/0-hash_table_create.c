#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 *
 * Return: pointer to the created hash table. Otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));

	if (new == NULL)
		return (NULL);

	new->size = size;
	new->array = malloc(new->size);
	if (new->array == NULL)
		return (NULL);

	return (new);
}
