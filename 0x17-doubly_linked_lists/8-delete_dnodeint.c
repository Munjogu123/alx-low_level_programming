#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: pointer to head node
 * @index: specified position
 *
 * Return: 1 if it succeeds otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *prev, *current, *next;

	if ((*head) == NULL)
		return (-1);

	if (index == 0)
	{
		prev = *head;
		*head = prev->next;
		prev->next = NULL;
		free(prev);
		return (1);
	}

	prev = *head;
	while (prev && count < index - 1)
	{
		prev = prev->next;
		count++;
	}
	if (prev == NULL || prev->next == NULL)
	{
		return (-1);
	}
	else
	{
		current = prev->next;
		next = current->next;
		prev->next = next;
		if (next)
			next->prev = prev;
		free(current);

		return (1);
	}
}
