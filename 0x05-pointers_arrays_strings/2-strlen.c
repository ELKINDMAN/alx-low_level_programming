#include "main.h"

/**
 * _strlen -  returns the length of a string.
 * @s: the parameter to be taken.
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
