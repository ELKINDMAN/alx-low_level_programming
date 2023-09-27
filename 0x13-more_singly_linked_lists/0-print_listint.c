#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * print_listint - prints all the elements of a list
 * @h: pointer to the head of the list.
 *
 * Description: This function prints all the elements of listint_t linked list
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t ncount = 0;
	const listint_t *node1 = h;

	while (node1 != NULL)
	{
		printf("%d\n", node1->n);
		ncount++;
		node1 = node1->next;
	}
	return (ncount);
}
