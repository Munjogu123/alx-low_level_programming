#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a list
 * @head: head pointer
 * @index: index of node to be returned
 *
 * Return: nth node otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
