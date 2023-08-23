#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: first parameter to take.
 * @b: second parameter to take.
 */
void swap_int(int *a, int *b)
{
	int cell = *a;
	 *a = *b;
	 *b = cell;
}
