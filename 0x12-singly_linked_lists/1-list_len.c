#include "lists.h"


/**
 * list_len - function that returns number of elements in Linked list.
 * @h: pointer to a node in a linked list.
 * Return: size_t which represents the number of elements in linked list. 
 */
size_t list_len(const list_t *h)
{
    size_t length = 0;

    while (h)
    {
        h = h->next;
        length++;
    }
    
    return (length);
}