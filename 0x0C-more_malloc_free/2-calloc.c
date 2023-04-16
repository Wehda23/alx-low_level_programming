#include "main.h"

/**
 * _memset - fills memory
 * @s: pointer to memory
 * @b: byte to write
 * @n: the number of bytes 
 * Return: a pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
		s[i] = b;

	return (s);
}


/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of arrays
 * @size: size of each array
 * Return: a pointer to the allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (!(nmemb && size))
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}