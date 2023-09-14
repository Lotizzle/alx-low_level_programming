#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a linked list
 * @head: head node
 * Return: sum of data or 0 if empty
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
