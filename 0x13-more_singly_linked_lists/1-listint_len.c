#include "lists.h"

/**
 * listint_len - gives the number of elements in a list
 * @h: parameter to take a pointer as an argument.
 *
 * Return: number of nodes found.
 */
size_t listint_len(const listint_t *h)
{
	size_t ncount = 0;

	while (h != NULL)
	{
		ncount++;
		h = h->next;
	}
	return (ncount);
}
