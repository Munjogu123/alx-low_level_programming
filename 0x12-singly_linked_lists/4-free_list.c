#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the list
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
