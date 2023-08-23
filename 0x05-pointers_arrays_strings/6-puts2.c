#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to the string to be printed.
 *
 * Description: This function prints each alternate character of the string
 *              pointed to by @str until it encounters the null character '\0',
 *              and then prints a new line.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]); /* Print the character at even indices */

	_putchar('\n'); /* Print a new line at the end */
}
