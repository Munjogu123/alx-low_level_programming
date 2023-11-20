#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to list
 * @index: nth value of a node
 *
 * Return: nth node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
		unsigned int i = 0;

		while (head != NULL)
		{
			if (i == index)
				return (head);
			head = head->next;
			i++;
		}
		return (0);
}
