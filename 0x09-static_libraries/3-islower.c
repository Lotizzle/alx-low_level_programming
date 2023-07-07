#include "main.h"
/**
 * _islower - checks the code
 * _islower – checks for lowercase characters
 * @c: The character to be checked
 * Return: 1 for lowercase character, 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
