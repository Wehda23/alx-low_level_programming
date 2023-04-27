#include "lists.h"

/**
 * print_list - print the elements of the node.
 * @h: pointer to the node. 
 * Return: size_t which is the number nodes exists.
 */
size_t print_list(const list_t *h)
{
    size_t length = 0;

    for (length = 0; h ; length++)
	{
		if (h->str)
			printf("[%i] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
            
		h = h->next;
	}

    return (length);
}