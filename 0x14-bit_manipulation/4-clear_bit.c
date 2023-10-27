#include "main.h"

/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index
 * @n: is unsigned long int input.
 * @index: unsinged int as a index of position of character
 * Return: 1 in success or -1 in fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
