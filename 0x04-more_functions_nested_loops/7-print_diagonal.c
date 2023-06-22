#include "main.h"

/**
 * print_diagonal - Draws the line
 *
 * @n: The number of times to print
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
	_putchar('\n');
	return;
	}

	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x; y++)
	_putchar(' ');
	_putchar('\\');
	_putchar('\n');
	}
}
