#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstring;

	newstring = malloc(strlen(s1) + n + 1);
	if (newstring != NULL)
	{
		int i;

		strcpy(newstring, s1);
		for (i = 0; s2[i] != '\0' && i < 6; i++)
		{
			newstring[strlen(s1) + i] = s2[i];
		}
		newstring[strlen(s1) + i] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (newstring);
}
