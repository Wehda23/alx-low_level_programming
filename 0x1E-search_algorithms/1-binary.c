#include "search_algos.h"


/**
 * binary_search - Searches for a value in an array of integers\
 * Using binary Search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: First index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = (int) size - 1, median = 0;

	/* Check Array is Null*/
	if (array != NULL)
	{
		/* While loop for binary search */
		while (left <= right)
		{
			/* Print the array */
			print_array(array, left, right);
			/* Calculate the median */
			median = left + (right - left) / 2;
			/* Check if the median is equal to the value */
			if (array[median] == value)
			{
				return (median);
			}
			/* In Case median is larger than the left */
			else if (array[median] > value)
			{
				right = median - 1;
			}
			else
			{
				left = median + 1;
			}
		};
	}

	return (-1);
}


/**
 * print_array - prints an array from specific start to end
 * @array: Array that contains integers.
 * @start: Start index at which to print the array.
 * @end: End index at which to print the array.
 */
void print_array(int *array, int start, int end)
{
	int index = start;

	printf("Searching in array: ");
	while (index <= end)
	{
		printf("%d", array[index]);
		if (index != end)
			printf(", ");

		index++;
	}
	printf("\n");
}
