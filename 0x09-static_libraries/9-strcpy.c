#include "main.h"

/**
 * _strcpy - Copies a string, including the terminating null byte.
 * @dest: Pointer to the buffer where the string should be copied.
 * @src: Pointer to the string to be copied.
 *
 * Return: Pointer to @dest.
 *
 * Description: This function copies the string pointed to by @src to
 *              the buffer pointed to by @dest, including the null byte '\0'.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i]; /* Copy characters from src to dest */

	dest[i] = '\0'; /* Add the null-terminating character */

	return (dest); /* Return a pointer to the destination string */
}
