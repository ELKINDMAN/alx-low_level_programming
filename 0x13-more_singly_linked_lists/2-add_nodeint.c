#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: value for the new node.
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addnode;

	new = malloc(sizeof(listint_t));
	if (addnode == NULL)
	{
		return (NULL);
	}

	addnode->n = n;
	addnode->next = *head;
	*head = addnode;

	return (addnode);
}
