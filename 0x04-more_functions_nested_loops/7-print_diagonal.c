#include "main.h"

/**
 * print_diagonal - uses backslash to Draw a diagonal
 * @n: specifies number of times for '\'
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return ;
	}
	for (i = 0; i < n; i++)
	{
		int spc;

		for (spc = 0; spc < i; spc++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
