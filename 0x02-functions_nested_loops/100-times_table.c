#include "main.h"

/**
 * print_times_table - prints multiplication table of from 1-14
 * @n: Input integer
 * Returns: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 15 && n >= 0)
	{
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			putformat(i * j);
		}
		_putchar('\n');
	}
	}

}

/**
 * putformat - formatted characters to output
 * @n: number to format
 * Return: nothing
 */

void putformat(int n)
{
	_putchar(',');
	_putchar(' ');

	if (n <= 9)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}

