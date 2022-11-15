#include "dog.h"
#include <stdlib.h>

/**
* free_dog - Frees the dogs.
* @d: The dog to be freed.
*/
void frre_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free (d->owner);
	free(d->name);
	free(d);
}
