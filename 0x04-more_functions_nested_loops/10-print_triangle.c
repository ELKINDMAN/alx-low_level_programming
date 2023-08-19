#include "main.h"

/**
 * print_triangle - Prints a triangle made of '#' characters.
 * @size: The size of the triangle.
 *
 * Description: This function prints a triangle of '#' characters,
 *              with each row having the specified size and proper indentation.
 *              If the size is 0 or less, it prints only a new line.
 */
void print_triangle(int size)
{
	int row, spaces, hashes;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 1; row <= size; row++)
	{
		for (spaces = size - row; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (hashes = 1; hashes <= row; hashes++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
