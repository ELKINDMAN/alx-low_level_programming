#ifndef DOG_H
#define DOG_H

/**
 * struct dog - sturcture
 * @name: first member.
 * @age: second member.
 * @owner: third member.
 *
 * Description: dog details
 */
struct dog
{
	char *name;
	float age;
	char  *owner;
};

/* function prototypes for structure project */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);*/

#endif
