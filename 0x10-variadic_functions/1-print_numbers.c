#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: a character input as in form of separator.
 * @n: is an integer input, represents number of integers passed.
 * @...: multiple arguements passed into the function.
 * Return: Void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i = n;

	if (!n)
	{
		printf("\n");
	}
	else
	{
		va_start(ap, n);
		while (i--)
			printf("%d%s", va_arg(ap, int), i ? (separator ? separator : "") : "\n");

		va_end(ap);
	}


}
