#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Description: This function calculates the length of the string pointed
 *              to by @s, then prints each character of the string in
 *              reverse order, and finally prints a new line.
 */
void print_rev(char *s)
{
	int length = 0;

	/* Calculate the length of the string */
	while (*s != '\0')
	{
		length++;
		s++;
	}

	/* Print characters in reverse order */
	while (length > 0)
	{
		_putchar(s[length - 1]); /* Print the character at index length - 1 */
		length--;
	}

	_putchar('\n'); /* Print a new line at the end */
}
