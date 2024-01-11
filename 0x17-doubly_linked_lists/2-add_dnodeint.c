#include "lists.h"

/**
 * add_dnodeint - adds node at beginning of list
 * @head: pointer to head node
 * @n: data of the new node
 *
 * Return: address of new node otherwise NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if ((*head) == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	new->next = *head;
	(*head)->prev = new;
	new->prev = NULL;
	*head = new;

	return (new);
}
