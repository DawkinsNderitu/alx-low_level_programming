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
	int x = 0, y = 0;

	if (argc == 3)
	{
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);
	}
	else
	{
	printf("Error");
	printf("\n");
	return (1);
	}
	return (0);
}
