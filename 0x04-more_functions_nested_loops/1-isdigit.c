#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Checks if a character is a digit
 *@c: The charater
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
