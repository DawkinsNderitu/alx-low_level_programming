#include "main.h"
/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x;
	(void) argv;

	x = argc - 1;

	printf("%d\n", x);
	return (0);

}
