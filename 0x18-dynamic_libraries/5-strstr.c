#include "main.h"
/**
 * _strstr - function that finds the first occurence of a substring
 * in a string
 * @haystack: source string
 * @needle: substring
 * Return: Always 0 (successs)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
