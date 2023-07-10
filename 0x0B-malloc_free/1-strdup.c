#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * of the string str
 * @str: pointer to string str
 *
 * Return: pointer to the duplicated string, NULL if fails
 */

char *_strdup(char *str)
{
	char *bbb;
	int i, l;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	bbb = malloc(sizeof(char) * (i + 1));

	if (bbb == NULL)
		return (NULL);
	for (l = 0; str[l]; l++)
		bbb[l] = str[l];

	return (bbb);
}
