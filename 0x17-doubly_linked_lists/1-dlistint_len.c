#include "lists.h"

/**
 * dlistint_len - fucntion that returns number of elements in linked list.
 * @h: pointer to a linked list.
 * Return: number of elements in linked list as type size_t.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
