#include "main.h"

/**
 * _strncat - concanetes the two strings
 * @dest: The string to be appended upon
 * @src: The string that will get appended to dest
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = O;

	while (src[x++])
	y++;

	for (x = 0; y && x < n; x)
	dest[x] = src[x];

	for (x = y; x < n; x++)
	dest(x) = '\0';

	return (dest);
}
