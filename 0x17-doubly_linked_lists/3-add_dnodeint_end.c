#include "lists.h"


/**
 * add_dnodeint_end - function that adds node at the end.
 * @head: pointer to a linked list
 * @n: value to add to new node.
 * Return: Pointer to linked list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;
	new->prev = temp;

	return (*head);
}
