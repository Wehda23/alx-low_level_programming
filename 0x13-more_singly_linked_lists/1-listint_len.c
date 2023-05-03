#include "lists.h"

/**
 * listint_len - returns the length of the nodes
 * @h: is a pointer to node.
 * Return: Length of a node.
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h ; count++)
		h = h->next;

	return (count);
}
