#include "main.h"

/**
 * print_times_table - prints multiplication table of from 1-14
 * @n: Input integer
 * Returns: void
 */
void print_times_table(int n)
{
	int i;

	if (n <= 15 && n > 0)
	{
	for (; n < 15; n++)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(n * i)
		}
	}
	}

}
