#include "dog.h"
#include <stdlib.h>

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
