#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: takes in an unsinged long int.
 */
void print_binary(unsigned long int n)
{
	char s[1024];
	int i = 0, number = n, modulus = 0, index = 0, j;

	if (number == 0)
		_putchar('0');
	else
	{
		for (index = 0; number > 0; index++)
		{
			modulus = number % 2;
			number /= 2;
			if (modulus == 1)
				s[index] = '1';
			else
				s[index] = '0';

			i = index;
		}

		s[i + 1] = '\0';

		for (j = i; j >= 0; j--)
			_putchar(s[j]);
	}

}

