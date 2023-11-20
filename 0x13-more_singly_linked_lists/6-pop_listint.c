#include "lists.h"

/**
 * pop_listint - deletes head node of a list
 * @head: pointer to list
 *
 * Return: head nodes data. Otherwise 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);
	temp = NULL;

	return (n);
}
