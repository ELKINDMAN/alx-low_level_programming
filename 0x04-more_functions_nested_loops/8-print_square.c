#include "main.h"

/**
 * print_square -  a function that prints a square, followed by a new line
 * @size: size is the size of the square
 */
void print_square(int size)
{
	int i;
	int sqr1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (sqr1 = 0; sqr1 < size; sqr1++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
