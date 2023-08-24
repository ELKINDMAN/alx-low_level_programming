#include "main.h"

/**
 * *_strncpy - copies a string from a specified byte.
 * @dest: first parameter.
 * @src: second parameter.
 * @n: third parameter.
 *
 * Return: a pointer, dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cnt;

	for (cnt = 0; cnt < n && src[cnt] != '\0'; cnt++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return dest;
}
