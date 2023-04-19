#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print name function
 * @name: string input
 * @f: function to call the print name function.
 * Return: Void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}