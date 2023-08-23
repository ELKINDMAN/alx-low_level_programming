#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Description: This function calculates the length of the string pointed
 *              to by @str, then prints the second half of the string.
 *              If the length is odd, it prints the last
 */
void puts_half(char *str)
{
	int length, start, i;

	for (length = 0; str[length] != '\0'; length++)
		; /* Calculate the length of the string */

	start = (length + 1) / 2; /* Starting index for the second half */

	for (i = start; str[i] != '\0'; i++)
		_putchar(str[i]); /* Print characters from the second half */

	_putchar('\n'); /* Print a new line at the end */
}
