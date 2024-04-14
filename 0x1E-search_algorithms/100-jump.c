#include "search_algos.h"


/**
 * jump_search - Searches for a value in an array of integers\
 * Using Jump Search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: First index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int square_root = (int) sqrt((double) size);
	int lower = 0, lead = 0;
	int index = 0;

	if (array != NULL)
	{
		/*First while loop */
		do {
			printf("Value checked array[%d] = [%d]\n", lead, array[lead]);

			lower = lead;
			lead += square_root;
			if (lead > (int) size - 1)
				lead = size;
		} while (lead < (int) size && array[lead] < value);
		/*Assign Index */
		index = lower;
		printf("Value found between indexes [%d] and [%d]\n", lower, lead);
		/* Normal Loop */
		while (index <= lead)
		{
			if (index == lead && array[lead] != value)
				break;
			printf("Value checked array[%d] = [%d]\n", index, array[index]);
			/* Check if index == value */
			if (array[index] == value)
				return (index);
			/* Incerement index */
			index++;
		}
	}
	return (-1);
}
