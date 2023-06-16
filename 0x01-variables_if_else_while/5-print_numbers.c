#include <stdio.h>

/**
 *  main - The program`s entrypoint
 *
 *  Return: Always results to a zero
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar(a + '0');

	putchar('\n');

	return (0);
}
