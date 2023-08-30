#include "stdio.h"
#include "stdlib.h"
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: Structure dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		pintf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
