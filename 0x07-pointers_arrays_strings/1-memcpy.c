#include "main.h"

/**
 * *_memcpy - function thst copies memory area to a destination area.
 * @dest: first parameter.
 * @src: second parameter.
 * @n: third parameter.
 *
 * Return: pointer to @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int trk;

	for (trk = 0; trk < n; trk++)
	{
		src[trk] = dest[trk];
	}
	return (dest);
}
