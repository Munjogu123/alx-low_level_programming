#include "lists.h"

/**
 * listint_len - returns num of elements in a list
 * @h: pointer to linked list
 *
 * Return: num of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
