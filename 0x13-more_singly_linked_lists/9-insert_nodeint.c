#include "lists.h"
/**
 * insert_nodeint_at_index - inserts nodes at specified index
 * @head: pointer to list
 * @idx: index to insert node
 * @n: data to be inserted in the node
 *
 * Return: address of new node. Otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!ptr)
		return (NULL);

	ptr->n = n;

	if (*head == NULL)
		return (NULL);

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	idx--;
	while (idx != 0)
	{
		temp = temp->next;
		idx--;
	}
	ptr->next = temp->next;
	temp->next = ptr;

	return (NULL);
}
