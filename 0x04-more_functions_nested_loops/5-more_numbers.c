#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, repeated 10 times
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 14) + '0');
	}
	_putchar((y % 14) + '0');
	}
	_putchar('\n');
	}
}

