#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node at an index
 * @head: pointer to a linked list.
 * @index: the index at which we are supposed to delete the node.
 * Return: 1 in case of success, -1 in case of failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int position = 0;
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);

	while (current != NULL)
	{
		if (index == 0)
		{
			*head = current->next;
			if (current->next != NULL)
				current->next->prev = NULL;
			free(current);
			return (1);
		}

		if (position == index)
		{
			if (current->prev != NULL)
				current->prev->next = current->next;

			if (current->next != NULL)
				current->next->prev = current->prev;

			free(current);
			return (1);
		}
		position++;
		current = current->next;
	}
	return (-1);
}
