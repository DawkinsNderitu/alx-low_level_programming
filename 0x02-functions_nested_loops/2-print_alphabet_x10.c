#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * Description: Outputs the a to z ten times
 */

void print_alphabet_x10(void)
{
	char lowercase;
	int i;

	for (i = 1; i < 10; i++)
	{
		for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		{
			_putchar(lowercase);
		}
		_putchar('\n');
	}
}
