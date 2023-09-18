#include "main.h"
/**
 * _strncpy - Copy a specified number of characters
 * from one string to another.
 * @dest: Destination string
 * @src: Source sstring
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
int count;

for (count = 0; count < n && src[count] != '\0'; count++)
dest[count] = src[count];

for (; count < n; count++)
dest[count] = '\0';

return (dest);
}
