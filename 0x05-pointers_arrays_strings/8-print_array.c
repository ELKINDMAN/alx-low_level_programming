#include "main.h"
#include <stdio.h>

/**
 * print_array -  an array of integers, followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to be printed.
 *
 * Description: This function prints the first @n elements of the array
 *              pointed to by @a, separated by commas.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]); /* Print the current element */

		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
