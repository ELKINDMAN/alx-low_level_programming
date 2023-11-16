#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node to a lsit's head.
 * @head: double pointer to the list_t.
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int cap = 0;

	while (str[cap])
		cap++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->cap = cap;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
