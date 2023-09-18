#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: Difference between the strings
 */

int _strcmp(char *s1, char *s2)

{
int counter, compare_value;

counter = 0;
while (s1[counter] == s2[counter] && s1[counter] != '\0')
{
	counter++;
}
compare_value = s1[counter] - s2[counter];
return (compare_value);
}
