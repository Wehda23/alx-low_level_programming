#include "main.h"

/**
 * get_bit - Function that returns the bit at specified index
 * @n: The value to turn to binary
 * @index: The index at which we return the value of the bit
 * Return: Return the bit at which the index is.
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index > 64)
		return (-1);
	return ((n >> index) & 0x1);
}
