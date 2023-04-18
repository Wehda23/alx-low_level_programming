#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints attributes of struct dog.
 * @d: struct dog pointer input
 * Return: Void
 */


void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
	}
}
