#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - struct dog
 * @d: pointer to the struct dog
 * @name: pointer to the name
 * @age: age of dog
 * @owner: name of dog`s owner
 *
 * Descriiption: initializes the struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
