#include "lists.h"

/**
 * sum_listint - sums all data(n) of a list
 * @head: pointer to a list
 *
 * Return: sum of all data. Otherwise NULL.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
