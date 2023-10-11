#include "dog.h"

/**
 * init_dog - Initializes a struct dog with the given values.
 * @d: A pointer to a struct dog to be initialized.
 * @name: The name to set.
 * @age: The age to set.
 * @owner: The owner to set.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

