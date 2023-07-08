#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: Count of arguments
 * @argv: Arguments passed to the program
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
