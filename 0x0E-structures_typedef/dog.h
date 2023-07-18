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
/**
 * dog_t - Typedef fr structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
