#include "main.h"
/**
 * print_sign - entry point
 * print_sign – Determines if the input of the number is
 * greater, equal or less than zero.
 * @n: The number to be checked
 * Return: 1 for a positive num, -1 for a negative num, 0 for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45}
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
