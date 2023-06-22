#include "main.h"

/**
 * print_line - Draws the line
 *
 * @n: The number of times the character is printed
 */

void print_line(int n)
{
	int y;

	if (n <= 0)
	{
	_putchar('\n');
	return;
	}

	for (y = 0; y < n; y++)
	_putchar('_');

	_putchar('\n');
}
