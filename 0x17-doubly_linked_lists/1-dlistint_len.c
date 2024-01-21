#include "lists.h"

/**
 * dlistint_len -  function that returns the number of elements in a list.
 * @h: parameter pointer to head pointer.
 *
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		node_count++;
	}
	return (node_count);
}
