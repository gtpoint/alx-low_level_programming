#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - this function that Frees dogs.
 * @d: The dog to be printed.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
