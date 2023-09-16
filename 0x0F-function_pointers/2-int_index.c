#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array storing the values.
 * @size: size of the array.
 * @cmp: the function pointer.
 *
 * Return: index of the character matched.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int l;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (l = 0; l < size; l++)
	{
		if (cmp(array[l]) == 1)
			return (l);
	}
	return (-1);
}
