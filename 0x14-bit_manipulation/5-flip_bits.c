#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: is unsigned long input.
 * @m: is unsigned long input.
 * Return: Return nuimber of different bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index = 0;

	n = n ^ m;
	while (n)
	{
		index += n & 1;
		n >>= 1;
	}
	return (index);
}
