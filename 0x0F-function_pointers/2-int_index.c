#include "function_pointers.h"

/**
 * int_index - ...
 * @array: ...
 * @size: ...
 * @cmp: ..
 * Return: ...
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int y = 0;

	if (array != NULL && cmp != NULL && size > 0)
		while (y < size)
		{
			if (cmp(array[y]))
			return (y);
			y++;
		}
	return (-1);
}
