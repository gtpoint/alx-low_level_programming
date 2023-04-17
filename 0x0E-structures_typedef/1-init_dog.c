#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - this function that initialize a variable of type struct dog.
 * @d: struct dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
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
