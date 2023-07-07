#include "main.h"
/**
 * _strcpy - copies a string
 *
 * @dest: Destination buffer
 * @src: Source string
 * Description of _strcpy: copy the string pointed to by the pointer 'src' to
 * the buffer pointed to by 'dest'
 * Return: pointer to the destination string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

