#include "main.h"
/**
 * _memset - fills a block of memory with a specific value
 * @s: pointer to the destination object.
 * @b: Value to be filled.
 * @n: number of bytes to be changed.
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
