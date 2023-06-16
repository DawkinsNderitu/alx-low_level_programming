#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the programs entrypoint
 *
 * Return: It returns o always success
 */

int main(void)
{
	char lettr;

	for (lettr = 'a'; lettr <= 'z'; lettr++)
	{
		if (lettr != 'q' && lettr != 'e')
			putchar(lettr);
	}

	putchar('\n');

	return (0);

}
