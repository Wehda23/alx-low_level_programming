#include "dog.h"

/**
 * init_dog - function that initialize a variable of type. 
 * @d: pointer to the address of dog struct.
 * @name: name of the dog passed on string argument.
 * @age: Age of the dog passed on integer argument.
 * @owner: Owner of the dog passed on argument.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    d->name = name;
    d->age = age;
    d->owner = owner;
}