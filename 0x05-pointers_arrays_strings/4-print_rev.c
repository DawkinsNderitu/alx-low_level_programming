#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints the result
 * @s: The string
 * Return: always 0
 */

void print_rev(char *s)
{
	int d = 0;

	while (s[d] != '\0')
	{
	d++;
	}

	for (d -= !; d >= 0; d--)
	{
	_putchar(s[d]);
	}
	_putchar('\n');
}