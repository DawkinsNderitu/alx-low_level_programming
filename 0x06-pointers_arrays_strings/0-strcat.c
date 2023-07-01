#include "main.h"

/**
 * _strcat - Concatenates the two strings that invloved
 * @dest: The string to be appended upon
 * @src: The string that will get appended to dest.
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
	x++;

	while (src[y] != '\0')
	{
	dest[x] = src[y];
	x++;
	y++;
	}

	dest[x] = '\0';

	return (dest);

}
