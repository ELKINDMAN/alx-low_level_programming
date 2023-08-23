#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to concatenate from src.
 *
 * Return: Pointer to the resulting concatenated string dest.
 *
 * Description:
 * This function appends characters from the source string src
 * to the destination string dest, up to a maximum of n characters.
 * The resulting string is null-terminated.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int i = 0;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	while (*src != '\0' && i < n)
	{
		dest[dest_length + i] = *src;
		i++;
		src++;
	}

	dest[dest_length + i] = '\0';

	return (dest);
}
