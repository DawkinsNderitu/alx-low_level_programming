#include <stdio.h>

/**
 *  main - The entrypoint into the program
 *
 *  Return: Always zero Success
 *
 */

int main(void)
{
	char low, upp;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);

	for (upp = 'A'; upp <= 'Z'; upp++)
		putchar(upp);

	putchar('\n');

	return (0);

}
