#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * Letters a and A are replaced by 4
 * Letters e and E are replaced by 3
 * Letters o and O are replaced by 0
 * Letters t and T are replaced by 7
 * Letters l and L are replaced by 1
 * @a: pointer to string
 *
 * Return: pointer to a.
 */
char *leet(char *a)
{
	int length, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	length = 0;
	while (a[length] != '\0')
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == a[length])
			{
				a[length] = leetNums[leetCount];
			}
			leetCount++;
		}
		length++;
	}
	return (a);
}
