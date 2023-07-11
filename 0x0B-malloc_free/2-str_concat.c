#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = c = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[c] != '\0')
		c++;
	concat_str = malloc(sizeof(char) * (i + c + 1));

	if (concat_str == NULL)
		return (NULL);
	i = c = 0;
	while (s1[i] != '\0')
	{
		concat_str[i] = s1[i];
		i++;
	}

	while (s2[c] != '\0')
	{
		concat_str[i] = s2[c];
		i++, c++;
	}
	concat_str[i] = '\0';
	return (concat_str);
}
