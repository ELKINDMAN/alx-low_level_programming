#define NULL ((void *)0)
#include "main.h"

/**
 * *_strchr - locates a character in a string.
 * @s: first parameter.
 * @c: second parameter.
 *
 * Return: pointe for successful match and NULL for no match.
 */
char *_strchr(char *s, char c)
{
	int chk;

	for (chk = 0; s[chk] != '\0'; chk++)
	{
		if (s[chk] == c)
		{
			return (s + c);
		}
	}
	return (NULL);
}
