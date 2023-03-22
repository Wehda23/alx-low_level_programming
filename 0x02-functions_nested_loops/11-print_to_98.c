#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98, followed
 * by new line
 * @n: integer input
 * Return: Nothing.
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i);
		_putchar(' ');
		if (i != 98)
		{
			_putchar(',');
		}
	}
	_putchar('\n');
}
