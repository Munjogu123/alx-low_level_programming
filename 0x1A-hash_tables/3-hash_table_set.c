#include "hash_tables.h"

/**
 * create_node - creates a node
 * @key: key of the node
 * @value: value of the key
 *
 * Return: pointer to the node created, otherwise NULL
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - adds element to hash table
 * @ht: hash table to add
 * @key: the key of the hash table
 * @value: the value in the hash table
 *
 * Return: 1 if it succeeds, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp, *new;
	char *dup;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL
	|| strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			dup = strdup(value);
			if (dup == NULL)
				return (0);
			free(temp->value);
			temp->value = dup;
			return (1);
		}
		temp = temp->next;
	}
	new = create_node(key, value);
	if (new == NULL)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
