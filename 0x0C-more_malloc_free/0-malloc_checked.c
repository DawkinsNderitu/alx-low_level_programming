#include <stdio.h>
#include <stdlib.h>

/*
 * malloc_checked - .....
 * @int: ....
 * @b: ....
 */

void *malloc_checked(unsigned int b)
{
	void *y = malloc(b);

	if (y == NULL)
	{
		exit (98);
	}
	return (y);
}
