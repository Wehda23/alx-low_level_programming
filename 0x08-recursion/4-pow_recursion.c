#include "main.h"

/**
 * _pow_recursion - powers up the number to a certain power
 * @x: input integer as value
 * @y: input integer as power
 * Return: returns the value powered up
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
