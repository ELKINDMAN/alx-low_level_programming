#include "main.h"
/**
 * print_numbers - function prrints 0 through 9
 */
void print_numbers(void)
{
	int val;

	for (val = 0; val < 10; val++)
	{
		_putchar(val + '0');
	}
	_putchar('\n');
}
