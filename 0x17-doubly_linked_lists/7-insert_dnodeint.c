#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given position
 * @h: pointer to head node
 * @idx: index to insert node
 * @n: data of new node
 *
 * Return: address of new node otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *prev, *current, *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (h == NULL && (*h) == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new = *h;
		*h = new;
		new->prev = NULL;
	}

	prev = *h;
	while (count < idx - 1)
	{
		prev = prev->next;
		count++;
	}
	current = prev->next;
	prev->next = new;
	new->prev = prev;
	new->next = current;
	current->prev = new;

	return (new);
}
