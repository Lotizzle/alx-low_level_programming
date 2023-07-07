#include "main.h"
/**
 * _strncat - concatenates a specified number of characters
 * from one string to another.
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to concatenate
 *
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
int length, j;

length = 0;
while (dest[length] != '\0')
{
	length++;
}
for (j = 0; j < n && src[j] != '\0'; j++, length++)
{
	dest[length] = src[j];
}
dest[length] = '\0';
return (dest);
}
