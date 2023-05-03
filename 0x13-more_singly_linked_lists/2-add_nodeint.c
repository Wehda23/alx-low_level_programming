#include "lists.h"

/**
 * add_nodeint - is a function that adds a node to the linked list.
 * @head: is a pointer to an pointer that saves address of a node.
 * @n: is an integer input.
 * Return: Return the memory address of the node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *clone;

	if (!n)
		return (NULL);

	clone = malloc(sizeof(listint_t));

	if (!clone)
		return (NULL);

	clone->n = n;
	clone->next = *head;

	*head = clone;

	return (clone);
}
