#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the memory.
 * @d: dog memory address.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
