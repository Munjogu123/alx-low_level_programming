#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of list
 * @head: pointer to head node
 * @n: data of the new node
 *
 * Return: address of new node otherwise NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head, *end = malloc(sizeof(dlistint_t));

	if (end == NULL)
		return (NULL);

	end->n = n;

	if ((*head) == NULL)
	{
		end->next = NULL;
		end->prev = NULL;
		*head = end;
		return (end);
	}

	while (temp->next)
		temp = temp->next;
	end->prev = temp;
	temp->next = end;
	end->next = NULL;

	return (end);
}
