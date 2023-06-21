#include"main.h"

/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Description: This fnction prints the lowercase
 */

void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
}
