#include "main.h"




/**
 * flip_bits - Count the changeo f value.
 * @n: is unsigned long input.
 * @m: is unsigned long input.
 * Return: Return nuimber of different bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;

	i = 0;
	n = n ^ m;
	while (n)
	{
		i += n & 1;
		n >>= 1;
	}
	return (i);
}
