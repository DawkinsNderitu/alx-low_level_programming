#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *n greater than 0: is positive
 *n is 0: is zer
 *n is less than 0: is negative
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>o)
	  printf("%d is positive\n", n);
	else if (n == 0)
	  printf("%d is zero\n", n);
	else
	  printf("%d is negative\n", n);
	return (0);
}
