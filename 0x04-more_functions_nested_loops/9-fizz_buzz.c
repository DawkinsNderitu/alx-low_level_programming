#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * For multiples of 3, it prints "Fizz".
 * For multiples of both 3 and 5, it prints "FizzBuzz".
 * Each number or word is separated by a space.
 *
 * Return: Always 0 (indicating success)
 */


int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
	if (x % 15 == 0)
	printf("FizzBuzz");
	else if (x % 3 == 0)
	printf("Fizz");
	else if (x % 5 == 0)
	printf("Buzz");
	else
	printf("%d", x);
	if (x < 100)
	printf(" ");
	}

	printf("\n");

	return (0);
}
