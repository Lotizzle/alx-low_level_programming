#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int present;
	unsigned long int future = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		present = future >> i;
		if (present & 1)
			count++;
	}

	return (count);
}
