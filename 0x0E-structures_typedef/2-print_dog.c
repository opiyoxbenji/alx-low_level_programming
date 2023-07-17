#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	/*print the name or (nil) if it's NULL*/
	printf("Name: %s\n", d->name);
	/*print the age*/
	printf("Age: %f\n", d->age);
	/*print the owner or (nil) if it's NULL*/
	printf("Owner: %s\n", d->owner);
}
