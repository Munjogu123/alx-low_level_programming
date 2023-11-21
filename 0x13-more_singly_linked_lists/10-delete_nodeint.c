#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: pointer to a list
 * @index: index for node to be deleted
 *
 * Return: 1 if it succeeds. Otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = *head;
	listint_t *current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	while (index != 0)
	{
		previous = current;
		current = current->next;
		index--;
	}
	previous->next = current->next;
	free(current);
	current = NULL;
	return (1);

	return (-1);
}
