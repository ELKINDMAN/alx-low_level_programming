#include "main.h"

/**
 * _strlen -  returns the length of a string.
 * @s: the parameter to be taken.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int lent = 0;

	while (*s != '\0')
	{
		lent++;
		s++;
	}
	return (lent);
}
