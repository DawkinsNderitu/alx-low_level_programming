#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for the lowercase character
 *
 * @c: the alphabet
 *
 * islower - checks if the alphabet is lowercase
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
