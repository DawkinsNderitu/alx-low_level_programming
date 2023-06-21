#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks of the character is alphabetic
 *
 * @c: the chracter to be checked
 *
 * Return - either i or 0
 */

int _isalpha(int c)
{
	if(isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
