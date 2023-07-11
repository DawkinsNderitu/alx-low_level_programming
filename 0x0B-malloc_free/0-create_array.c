#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: The size of the array to be created
 * @c: The character to initialize the array elements with
 *
 * Return: On success, returns a pointer to the created array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *newarray;

	newarray = malloc(size * sizeof(char));

	if (size == 0)
	return (NULL);

	if (newarray == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	newarray[i] = c;

	return (newarray);
}
