#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - reallocates a memory block using malloc
  * @ptr: pointer
  * @old_size: ...
  * @new_size: ...
  *
  * Return: ...
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *y;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		y = malloc(new_size);

		if (y == NULL)
			return (NULL);

		return (y);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	y = malloc(new_size);

	if (y == NULL)
		return (NULL);

	for (x = 0; x < old_size && x < new_size; x++)
	{
		y[x] = ((char *) ptr)[x];
	}

	free(ptr);
	return (y);
}
