#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in
 * a linked list.
 * @h: pointer to a struct
 *
 * Return: the number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
