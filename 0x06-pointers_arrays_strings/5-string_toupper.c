#include "main.h"
/**
 * string_toupper - Changes all lowercase characters to uppercase
 * @z: pointer to string
 *
 * Return: pointer to uppercase string
 */

char *string_toupper(char *z)
{
int length;

length = 0;

while (z[length] != '\0')
{
	if (z[length] >= 97 && z[length] <= 122)
	{
		z[length] = z[length] - 32;
	}
	length++;
}
return (z);
}
