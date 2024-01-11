#include "lists.h"

/**
 * dlistint_len - gets no of elems in list
 * @h: head node
 *
 * Return: no of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
