#include "main.h"


/**
 * set_bit - sets a bit to 1
 * @n: is unsigned long int input.
 * @index: Is the position of the character.
 * Return: 1 in case of success -1 incase of fail.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n += 1 << index;
	return (1);
}