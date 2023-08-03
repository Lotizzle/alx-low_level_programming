#include "lists.h"

/**
 * *reverse_listint - a function that reverses a linked list
 * @head: pointer to a pointer for the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current->next != NULL)
	{
		next = current->next;
		current->next = next->next;
		next->next = (*head);
		*head = next;
	}
	return (*head);
}
