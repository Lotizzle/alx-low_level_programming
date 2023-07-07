#include "main.h"
/**
 * _strcat - Concatenates one string onto the end of another string.
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
int length, j;
length = 0;
while (dest[length] != '\0')
{
length++;
}
for (j = 0; src[j] != '\0'; j++, length++)
{
dest[length] = src[j];
}
dest[length] = '\0';
return (dest);
}
