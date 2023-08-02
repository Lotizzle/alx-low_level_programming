#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the
 * data (n) of a linked list.
 * @head: pointer to the linked list
 *
 * Return: sum of data (n) of a linked list or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (!temp)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
