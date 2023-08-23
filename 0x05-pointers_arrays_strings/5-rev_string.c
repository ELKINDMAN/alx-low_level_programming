#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 * Description: This function reverses the characters in the string pointed
 *              to by @s by swapping characters from the beginning and end
 *              of the string until they meet in the middle.
 */
void rev_string(char *s)
{
	int length = 0;
	int start, end;
	char temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	start = 0;             /* Start index of the string */
	end = length - 1;      /* End index of the string */

	/* Swap characters from start to end until they meet in the middle */
	while (start < end)
	{
		/* Swap characters using a temporary variable */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Move indices towards each other */
		start++;
		end--;
	}
}

