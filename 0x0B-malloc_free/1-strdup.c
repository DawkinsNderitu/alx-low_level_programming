#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies the string
 * @str: the string
 * Return: returns the copy of the string
 */

char *_strdup(char *str)
{
	int x = 0, y = 1;
	char *copy;

	if (str == NULL)
	{
	return (NULL);
	}
	while (str[y])
	{
	y++;
	}

	copy = malloc((sizeof(char) * y) + 1);

	if (copy == NULL)
	return (NULL);

	while (x < y)
	{
	copy[x] = str[x];
	x++;
	}

	copy[x] = '\0';
	return (copy);
}
