#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: destination memory area
 * @src: Source memory area
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
