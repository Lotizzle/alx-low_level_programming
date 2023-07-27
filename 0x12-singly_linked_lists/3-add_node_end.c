#include "lists.h"

/**
 * *add_node_end - a function that adds a new node at the end of a list
 * @head: a pointer to a pointer of the head of a list
 * @str: string containing new string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

		return (last);
}
