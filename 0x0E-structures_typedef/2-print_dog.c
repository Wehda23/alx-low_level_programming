#include <stdio.h>
#include "dog.h"



void print_dog(struct dog *d)
{
    if (d)
    {
        printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
    }
}