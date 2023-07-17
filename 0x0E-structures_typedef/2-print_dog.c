#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		/*print the name or (nil) if it's NULL*/
		printf("Name: %s\n", d->name ? d->name : "(nil)");

		/*print the age*/
		printf("Age: %.1f\n", d->age);

		/*print the owner or (nil) if it's NULL*/
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
