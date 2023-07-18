#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: the dogs
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
