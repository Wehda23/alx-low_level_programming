#include "main.h"


/**
 * find_root - is a function that looks for natural root number
 * @n: input integer
 * @root: input integer
 * Return: Square root of a number
 */
int find_root(int n, int root)
{

	if ((root * root) == n)
		return (root);

	if (root == n / 2)
		return (-1);

	return (find_root(n, root + 1));

}

/**
 * _sqrt_recursion - Square root of a number
 * @n: integer input
 * Return: Square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_root(n, 0));

}
