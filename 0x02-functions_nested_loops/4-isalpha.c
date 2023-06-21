#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks if a character is alphabetic
 *
 * @c: the chracter to be checked
 *
 * Return: 1 if c is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
