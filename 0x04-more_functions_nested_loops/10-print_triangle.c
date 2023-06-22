#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size
 * @size: The size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int x, y, k;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 1; x <= size; x++)
	{
	for (k = size - x; k >= 1; k--)
	{
	_putchar(' ');
	}
	for (y = 1; y <= x; y++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}

