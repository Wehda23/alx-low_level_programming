#include "main.h"


/**
 * set_bit - Function that sets value of a bit to 1 at given index.
 * @n: Pointer to a number.
 * @index: Integer that represents the index at which we are changing.
 * Return: 1 in case of success or -1 in case of failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if(index > 64)
	{
		return (-1);
	}

	*n = *n + (1 << index);

	return (1);
}
