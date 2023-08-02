#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: pointer to a pointer for a linked list
 *
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (num);
}
