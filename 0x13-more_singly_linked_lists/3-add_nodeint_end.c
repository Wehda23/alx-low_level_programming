#include "lists.h"


/**
 * add_nodeint_end - adds a node at end of the tail.
 * @head: a pointer to a pointer to an address of a node.
 * @n: A const input integer.
 * Return: Memory address of the node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *tail, *clone;

	tail = *head;

	if (!n)
		return (NULL);

	clone = malloc(sizeof(listint_t));

	if (!clone)
		return (NULL);

	clone->n = n;
	clone->next = NULL;

	if (*head == NULL)
		*head = clone;
	else
	{
		tail = *head;
		while (tail->next)
			tail = tail->next;
		tail->next = clone;
	}

	return (*head);
}
