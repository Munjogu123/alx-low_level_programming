#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds node at end of the list
 * @head: pointer to head address
 * @str: data of the list
 *
 * Return: returns address of new element;
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *add;

	ptr = *head;
	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	add->str = strdup(str);
	add->len = strlen(add->str);
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = add;

	return (add);
}
