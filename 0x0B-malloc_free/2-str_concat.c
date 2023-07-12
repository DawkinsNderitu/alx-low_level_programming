#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: Returns a pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *twostrings;
	int x, y;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	x = y = 0;
	while (s1[x] != '\0')
	x++;
	while (s2[y] != '\0')
	y++;

	twostrings = malloc(sizeof(char) * (x + y + 1));

	if (twostrings == NULL)
	return (NULL);

	x = y = 0;
	while (s1[x] != '\0')
	{
	twostrings[x] = s1[x];
	x++;
	}
	while (s2[y] != '\0')
	{
	twostrings[x] = s2[y];
	x++, y++;
	}
	twostrings[x] = '\0';
	return (twostrings);
}
