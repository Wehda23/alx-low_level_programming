#include "lists.h"


/**
 * insert_dnodeint_at_index - Inserts a node at index in a doubly linked list.
 * @h: Pointer to a pointer to the head of the linked list.
 * @idx: Index at which the new node is to be inserted.
 * @n: Value to be assigned to the new node.
 * Return: Address of the newly inserted node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	unsigned int index;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}

	current = *h;
	index = 0;

	while (current != NULL)
	{
		if (index == idx - 1)
		{
			if (current->next == NULL)
			{
				current->next = new;
				new->prev = current;
				return (new);
			}
			else
			{
				new->next = current->next;
				new->prev = current;
				current->next->prev = new;
				current->next = new;
				return (new);
			}
		}
		current = current->next;
		index++;
	}

	free(new);
	return (NULL);
}

