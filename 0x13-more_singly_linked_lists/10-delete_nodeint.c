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
	unsigned int i = 0;
	listint_t *temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	} else
	{
		while (*head != NULL)
		{
			if (i == index - 1)
			{
				listint_t *del = temp->next;
				temp->next = temp->next->next;
				free(del);
				return (1);
			}
			i++;
			temp = temp->next;
		}
	}

	return (-1);
}
