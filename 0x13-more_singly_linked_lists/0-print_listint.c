#include "lists.h"

size_t print_listint(const listint_t *h)
{
    size_t count;
    
    for (count = 0; h ; count++)
    {
        if (h->n)
        {
            printf("%d\n", h->n);
        }
        h = h->next;
    }
        
    

    return (count);
}
