#include "function_pointers.h"

/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int itr;

	if (array != NULL || action != NULL)
	{
		for (itr = 0; itr <= size; itr++)
		{
			action(array[itr]);
		}
	}
	else
	{
		return;
	}
}
