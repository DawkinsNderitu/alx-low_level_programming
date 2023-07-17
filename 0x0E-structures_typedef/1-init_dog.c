#include "main.h"

/**
 * init_dog - struct dog
 * @d: pointer to the struct dog
 * @name: pointer to the name
 * @age: age of dog
 * @owner: name of dog`s owner
 *
 * Description: initializes the struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
