#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the dogd
 * @d: pointer
 *
 * Return: always zero
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->owner);
	free(d->name);
	free(d);
	}
}
