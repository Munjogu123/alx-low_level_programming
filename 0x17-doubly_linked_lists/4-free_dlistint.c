#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
