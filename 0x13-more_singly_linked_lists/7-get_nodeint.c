#include "lists.h"

/**
 * *get_nodeint_at_index - a function that returns the nth node of
 * a linked list
 * @head: pointer to linked list
 * @index: index of the node
 *
 * Return: the nth node of the list, NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *temp = head;

	while (temp && num < index)
	{
		temp = temp->next;
		num++;
	}

	return (temp ? temp : NULL);
}


