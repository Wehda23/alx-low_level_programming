#include "lists.h"


/**
 * print_dlistint - function that prints all nodes and return their number.
 * @h: a pointer to list.
 * Return: The number of elements in nodes as type size_t.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;/* Number of nodes */

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
