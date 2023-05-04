#include "main.h"



/**
 * clear_bit - Function sets a bit to 0.
 * @n: is unsigned long int input.
 * @index: unsinged int as a index of position of character
 * Return: 1 in success -1 in fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
