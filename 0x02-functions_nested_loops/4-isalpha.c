#include "main.h"
/**
 * _isalpha - Checks the code
 * _isalpha – Checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 for alphabetic character, 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 97 && <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n')
}

