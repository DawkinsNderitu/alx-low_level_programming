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
	int len1 = 0, len2 = 0, total_len = 0;
	char *twostrings;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[len1])
	len1++;
	while (s2[len2])
	len2++;

	total_len = len1 + len2;

	twostrings = malloc((total_len + 1) * sizeof(char));

	if (twostrings == NULL)
	return NULL;

	int i;

	for (i = 0; i < len1; i++)
	twostrings[i] = s1[i];

	int j;
	for (j = 0; j < len2; j++, i++)
	twostrings[i] = s2[j];

	twostrings[i] = '\0';

	return twostrings;
}
