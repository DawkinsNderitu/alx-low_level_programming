#include "main.h"
#include <stdio.h>

/**
 * _puts_recursionn - prints a string followed by a new line
 * @s: the string
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
