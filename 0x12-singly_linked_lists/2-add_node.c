#include "lists.h"
#include <string.h>

/**
 * add_node - adds node at the beginning
 * @head: pointer to address of first node
 * @str: data of the node
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *newstr;
	list_t *add;

	newstr = strdup(str);
	add = malloc(sizeof(list_t));

	if (add == NULL)
		return (NULL);

	add->str = newstr;
	add->next = *head;
	add->len = strlen(str);
	*head = add;
	return (add);
}
