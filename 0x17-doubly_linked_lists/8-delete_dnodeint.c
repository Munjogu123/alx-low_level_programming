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
	if (prev->next == NULL)
	{
		prev->prev->next = NULL;
		prev->prev = NULL;
		free(prev);
	} else
	{
		current = prev->next;
		if (current)
		{
			next = current->next;
			prev->next = next;
			next->prev = prev;
			free(current);
		}
		return (-1);
	}
	return (1);
}
