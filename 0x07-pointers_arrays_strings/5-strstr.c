#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates the first
 * @haystack: The string to search within
 * @needle: The substring to locate
 *
 * Return: Pointer to the beginning of the located substring in 'haystack',
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	char *x = haystack;
	char *y = needle;

	while (*y != '\0' && *haystack == *y)
	{
	haystack++;
	y++;
	}

	if (*y == '\0')
	return (x);

	haystack = x + 1;
	}
	return (NULL);
}
