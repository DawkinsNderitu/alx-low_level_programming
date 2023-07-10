#include "main.h"
#include <math.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	(void) argc;

	i = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", i);
	return (0);
}
