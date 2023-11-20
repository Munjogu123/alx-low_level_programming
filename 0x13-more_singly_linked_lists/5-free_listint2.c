#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!head)
		return;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
