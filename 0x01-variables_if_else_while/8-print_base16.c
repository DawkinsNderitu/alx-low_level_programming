#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The entrypoint of the program
 *
 * Return: Always (0) success
 */

int main(void)
{
	int m;
	char low;

	for (m = '0'; m <= '9'; m++)
	putchar(m);

	for (low = 'a' ; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);

}
