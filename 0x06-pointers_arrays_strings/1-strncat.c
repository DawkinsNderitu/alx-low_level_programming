#include "main.h"

/**
 * _strncat - concanetes the two strings
 * @dest: The string to be appended upon
 * @src: The string that will get appended to dest
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
	x++;

	while (src[y] != '\0' && y <= n)
	{
	dest[x] = src[y];
	x++;
	y++;
	}

	dest[x] = '\0';

	return (dest);
}
