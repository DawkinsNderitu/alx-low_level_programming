#include <stdio.h>
/**
 * _strpbrk - Locates the first
 * @s: The string to be searched
 * @accept: The set of bytes to search for
 *
 * Return: Pointer to the byte in 's' that matches
 */
char *_strpbrk(char *s, char *accept)
{
	char *x, *y;

	for (x = s; *x != '\0'; x++)
	{
	for (y = accept; *y != '\0'; y++)
	{
	if (*x == *y)
	return (x);
	}
	}
	return (NULL);
}
