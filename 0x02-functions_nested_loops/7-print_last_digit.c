#include "main.h"

/**
 * print_last_digit
 *
 * @n
 *
 * Return
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = -last;
	_putchar('0' + last);
	return (last);
}
