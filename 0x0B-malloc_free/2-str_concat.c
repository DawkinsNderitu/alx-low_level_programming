#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concanetes two strings
 * @s1: the first string
 * @s2: the second string
 * Return: Returns a pointer
 */
char *str_concat(char *s1, char *s2)
{
	int x, y, z;
	char *twostrings;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	x = _strlen(s1);
	y = _strlen(s2);

	twostrings = malloc((x + y) * sizeof(char) + 1);

	if (twostrings == 0)
	return (0);

	for (z = 0; z <= x + y; z++)
	{
	if (z < x)
	twostrings[z] = s1[z];
	else
	twostrings[z] = s2[z - x];
	}
	twostrings[z] = '\0';
	return (twostrings);
}
