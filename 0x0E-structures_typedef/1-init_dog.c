#include "dog.h"
#include <stdlib.h>
/**
 * void init_dog - function to initialize.
 * @d: first param
 * @name: second param
 * @age: third param
 * @owner: fourth param
 *
 * Description: This function takes a pointer to a struct dog and assigns
 * provided values to its name, age, and owner fields.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
