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
	printf("%d\n", argc - 1);
	return (0);
}
