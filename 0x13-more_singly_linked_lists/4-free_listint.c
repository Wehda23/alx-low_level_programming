#include "lists.h"
/**
 * free_listint - free a list
 * @head: the head of list
* Return: void, no return
*/
void free_listint(listint_t *head)
{
	listint_t *position;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		position = head;
		head = head->next;
		free(position);
	}
	head = '\0';
}