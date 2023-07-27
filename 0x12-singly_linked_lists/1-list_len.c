#include "lists.h"

/**
 * list_len - a function that returns the number of elements in
 * a linked list.
 * @h: pointer to a struct
 *
 * Return: the number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
