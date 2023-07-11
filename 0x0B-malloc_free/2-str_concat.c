#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concanetes two strings
 * @s1: the first string
 * @s2: the second string
 * Return: Returns a pointer
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, z = 0, f = 0, h = 0;
	char *twostrings;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[x])
	x++;
	while (s2[y])
	y++;

	z = z + y;

	twostrings = malloc((z + 1) * sizeof(char));

	if (twostrings == NULL)
	return (NULL);

	while (f < z)
	{
	if (f <= x)
	twostrings[f] = s1[f];
	if (f >= x)
	{
	twostrings[f] = s2[h];
	h++;
	}
	f++;
	}
	twostrings[f] = '\0';
	return (twostrings);
}
