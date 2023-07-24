#include "main.h"
#include <stdlib.h>

/**
  * array_range - ...
  * @min: ...
  * @max: ...
  *
  * Return: integer value
  */

int *array_range(int min, int max)
{
	int *y;
	int z, i = 0;

	if (min > max)
	return (NULL);

	z = ((max - min) + 1);
	y = malloc(sizeof(int) * z);

	if (y == NULL)
	return (NULL);

	while (min <= max)
	{
		y[i] = min;
		i++;
		min++;
	}
	return (y);
}
