#include "lists.h"

/**
 * list_len - return no of elements
 * @h: linked list
 *
 * Return: returns no of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
