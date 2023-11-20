#include "lists.h"

/**
 * print_listint - prints elements of a list
 * @h: pointer to linked list
 *
 * Return: returns the no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
