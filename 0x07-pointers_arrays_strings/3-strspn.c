#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string
 *
 * Return: The number of bytes
 * of bytes from @accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int number = 0;
	int x, y;
	int similar;

	for (x = 0; s[x] != '\0'; x++)
	{
	similar = 0;
	for (y = 0; accept[y] != '\0'; y++)
	{
	if (s[x] == accept[y])
	{
	similar = 1;
	break;
	}
	}
	if (similar == 0)
	break;
	number++;
	}
	return (number);
}
