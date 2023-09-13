#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints information about a struct dog.
 * @d: A pointer to a struct dog to extract information from.
 *
 * Description: This function prints the details of a struct dog,
 * including its name, age, and owner. If any of these fields is NULL,
 * it prints "(nil)" for that field.
 */
void print_dog(struct dog *d)
{
	if (d->name || d->age || d->owner == NULL)
	{
		printf("nil");
	}
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s", d->name);
	printf("Age: %f", d->age);
	printf("Owner: %s", d->owner);
}
