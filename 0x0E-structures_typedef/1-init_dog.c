#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Function that initializes a variable of type struct dog
 * @d: Struct to initialize
 * @name: Name of dog
 * @age: Dog's age
 * @owner: Owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
