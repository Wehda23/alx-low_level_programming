#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - is a function that returns the sum of all it's arguments.
 * @n: integer input.
 * @...: argurments passed.
 * Return: an integer return which is sum of all inputs gathered.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum, i = n;

	if (n == 0)
		return (0);

	va_start(ap, n);

	while (i--)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
