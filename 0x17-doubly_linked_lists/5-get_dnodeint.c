#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: head node
 * @index: index of the node
 * Return: returns data stored in node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
