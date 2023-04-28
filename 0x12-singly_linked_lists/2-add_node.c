#include "lists.h"

/**
 * add_node - function that adds a node to start.
 * @head: is a pointer to a pointer of a node.
 * @str: Pointer to a string character.
 * Return: Memory addess of the node.
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new;
	char *s;

	if (!str)
		return (NULL);
	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	s = strdup(str);

	if (!s)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;

	*head = new;

	return (*head);
}
