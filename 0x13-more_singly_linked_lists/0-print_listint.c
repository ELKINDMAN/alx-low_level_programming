#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * size_t print_listint - prints all the elements of a list
 * @h: parameter that points to head pointer.
 * Return: returns the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t ncount = 0;
	listint_t *node1 = h;

	while (node1 != NULL)
	{
		printf("%d\n", node1->n);
		ncount++;
		node1 = node1->next;
	}
	return (ncount);
}
