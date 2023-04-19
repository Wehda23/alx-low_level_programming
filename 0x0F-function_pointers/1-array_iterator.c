#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 * @array: is the array
 * @size: size of the array
 * @action: do some thing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
