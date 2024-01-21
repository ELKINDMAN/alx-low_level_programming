#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a struct.
 * @h: a pointer to 'head pointer'.
 *
 * Return: Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr =  h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
