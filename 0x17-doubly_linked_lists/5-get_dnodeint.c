#include "lists.h"


/**
 * get_dnodeint_at_index - function that returns node at selected index
 * @head: pointer to a linked list
 * @index: integer value which represents position at which the node exists.
 * Return: Pointer to the node at the index poisition.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int position = 0;

	while (head != NULL)
	{
		if (position == index)
			return (head);

		position++;
		head = head->next;
	}

	return (NULL);
}
