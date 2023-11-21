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
	unsigned int i = 0;
	listint_t *ptr = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!ptr)
		return (NULL);

	ptr->n = n;

	if (*head == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	while (*head != NULL)
	{
		if (i == idx - 1)
		{
			ptr->next = temp->next;
			temp->next = ptr;
			return (ptr);
		}
		temp = temp->next;
		i++;
	}

	return (NULL);
}
