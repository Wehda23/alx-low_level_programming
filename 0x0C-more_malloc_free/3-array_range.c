#include "main.h"

/**
 * array_range - create array of integer values
 * @min: minimum number
 * @max: maximum number
 * Return: a newly created array
 */
int *array_range(int min, int max)
{
	unsigned int width;
	int *range;

	if (max < min)
		return (NULL);

	width = max - min;

	range = malloc(sizeof(int) * (width + 1));
	if (!range)
		return (NULL);

	do {
		*range++ = min++;
	} while (min <= max);

	return (range - width - 1);
}
