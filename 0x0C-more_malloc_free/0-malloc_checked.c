#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that alloctes memory
 * malloc - function to create space.
 * @b: parameter for size to allocate.
 *
 * Return: pointer to the memory.
 */
void *malloc_checked(unsigned int b)
{
	int *memAlloc;

	memAlloc = malloc(b);
	if (memAlloc != NULL)
	{
		return (memAlloc);
	}
	else
	{
		exit(98);
	}
}
