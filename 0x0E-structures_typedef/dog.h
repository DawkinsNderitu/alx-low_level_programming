#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the dog
 * @name: pointer to the name of the dog
 * @age: the dog`s age
 * @owner: pointer to the owner of the dog
 *
 * Description: Represents the dog and other attributes
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
