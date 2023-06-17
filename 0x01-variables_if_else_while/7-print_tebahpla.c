#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -The programs entry point
 *
 * Return: ALways 0 success
 *
 */

int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower++)
	putchar(lower);
	putchar('\n');

	return (0);

}
