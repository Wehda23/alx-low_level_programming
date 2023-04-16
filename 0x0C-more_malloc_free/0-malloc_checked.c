#include "main.h"

/**
 * malloc_checked - allocate  memory using malloc
 * @b: the number of bytes to allocate
 * Return: return pointer to allocated memory, cause termination if fail.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p)
		return (p);

	exit(98);
}