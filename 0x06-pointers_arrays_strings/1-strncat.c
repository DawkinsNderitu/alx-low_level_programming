#include "main.h"

/**
 * _strncat - Copies a string up to a given number of characters
 * @dest: The destination string where the copy will be stored
 * @src: The source string to be copied
 * @n: The maximum number of characters to be copied
 *
 * Description: This function copies characters from the source string @src
 * to the destination string @dest. It will copy at most @n characters from
 * @src, and if the end of @src is reached before @n characters are copied,
 * the remaining characters in @dest will be filled with null terminators.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x++])
	y++;
	for (x = 0; src[x] && x < n; x++)
	dest[y++] = src[x];
	return (dest);
}
