#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to be searched.
 * @c: Character to be located
 * Description:
 * @c in the string @s
 *
 * Return: Pointer
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == c)
	{
	return (&s[i]);
	}
	}
	if (c == '\0')
	{
	return (&s[i]);
	}
	return (NULL);
}
