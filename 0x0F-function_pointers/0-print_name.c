#include "function_pointers.h"

/**
 * print_name - print name function
 * @name: string input
 * @f: function to call the print name function.
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
        f(name);
}