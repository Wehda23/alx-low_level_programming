#include "lists.h"


/**
 * add_node_end - addes a node at end of the list.
 * @head: a pointer to pointer of an address of a list_t node.
 * @str: A pointer to a string const character.
 * Return: list_t* memory address of a node.
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new, *tail;
	char *s;

	tail = *head;

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

	new->str = strdup(s);
	new->len = strlen(new->str);
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	while (tail->next)
	{
		tail = tail->next;
	}

	tail->next = new;

	return (tail);
}
