#include "main.h"

/**
 * _strncpy - Copies a string up to a specified number of characters.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to be copied.
 *
 * Return: A pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];

	for (; i < n; i++)
	dest[i] = '\0';

	return (dest);
}
