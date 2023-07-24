#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc - ...
  * @nmemb: number of members
  * @size: size
  *
  * Return: ...
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, y = 0;
	char *z;

	if (nmemb == 0 || size == 0)
	return (NULL);

	y = (nmemb * size);
	z = malloc(y);

	if (z == NULL)
	return (NULL);

	while (x < y)
	{
		z[x] = 0;
		x++;
	}
	return (z);
}
