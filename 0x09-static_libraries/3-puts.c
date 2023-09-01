#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Description: This function prints each character of the string pointed
 *              to by @str until it encounters the null character '\0',
 *              and then prints a new line.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str); /* Print the current character */
		str++; /* Move to the next character */
	}
	_putchar('\n'); /* Print a new line at the end */
}
