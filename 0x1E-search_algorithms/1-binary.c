#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in
 * a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: Index where value is located or -1 if NULL or value not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
