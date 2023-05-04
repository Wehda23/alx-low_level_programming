#include "main.h"



/**
 * get_bit - Function that returns one bit
 * @n: is unsigned long int input.
 * @index: unsinged int as a index of position of character
 * Return: The value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);

	bit = n >> index;

	return (bit & 0x1);
}
