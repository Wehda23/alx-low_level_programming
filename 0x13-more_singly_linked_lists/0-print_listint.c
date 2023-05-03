#include "lists.h"

/**
 * print_listint - is a function the prints n vairable of a node.
 * @h: is a pointer to node.
 * Return: lenght of the nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h ; count++)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
		}
		h = h->next;
	}



	return (count);
}
