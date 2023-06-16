#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- The program`s entry point
 *
 * Return: Always 0 Succes
 */

int main(void)
{
	int e;

	for (e = '0'; e <= '9'; e++)
	{
	putchar(e);
	if (e != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
