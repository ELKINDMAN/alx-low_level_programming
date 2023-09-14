#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Print a variable number of integers with a separator.
 * @separator: The string used to separate the numbers (or NULL for no separator).
 * @n: The number of integers to print.
 * @...: The variable number of integer arguments to print.
 *
 * Description: This function takes a variable number of integer arguments and
 * prints them to the standard output, separated by the specified separator
 * string. If separator is NULL, no separator is printed. A new line is added
 * at the end of the printed numbers.
 *
 * Return: None (void).
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int v;

	va_list(numz);
	va_start(numz,n);
	for(v = 0; v < n; v++);
	{
		if(separator == NULL)
		{
			printf("%d\n", va_arg(numz, int));
		}
		else
		{
			printf("%d%s\n", va_arg(numz, int), separator);
		}
	}
	va_end(numz);
}
