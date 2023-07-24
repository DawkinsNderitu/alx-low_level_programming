#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * malloc_checked - Allocates memory
  * @b: the size to allocate
  *
  * Return: Nothing.
  */

void *malloc_checked(unsigned int b)
{
	void *y;

	y = malloc(b);
	if (y == NULL)
	{
		exit(98);
	}
	return (y);
}
