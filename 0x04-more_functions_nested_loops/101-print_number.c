#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int num = n;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10 != 0)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}
