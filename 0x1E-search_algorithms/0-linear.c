#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: first index where value is located or -1 if NULL or value not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t n;

	if (array == NULL)
		return (-1);

	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%lu] = [%d]\n", n, array[n]);

		if (value == array[n])
			return (n);
	}
	return (-1);
}
