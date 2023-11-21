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
	unsigned int i;
	listint_t *del, *current;

	current = *head;
	del = NULL;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	
	i = 0;
	while (current != NULL)
	{
		if ((i == index - 1) && index != 0)
		{
			del = current->next;
			current = current->next->next;
			free(del);
			del = NULL;
			return (1);
		}
		*head = (*head)->next;
		i++;
	}

	return (-1);
}
