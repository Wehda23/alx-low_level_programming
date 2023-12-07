#include "lists.h"

/**
 * sum_dlistint - function returns the total value of all n in nodes.
 * @head: pointer to a linked list passed by value
 * Return: Total value of n(/s) in linked lists.
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
