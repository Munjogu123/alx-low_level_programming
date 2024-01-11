#include "lists.h"

/**
 * sum_dlistint - sums all of the data
 * @head: head node
 *
 * Return: sum of all data otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
