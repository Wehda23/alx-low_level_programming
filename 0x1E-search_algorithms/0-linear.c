

/**
 * linear_search - Searches for a value in an array of integers\
 * Using Linear Search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: First index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array != NULL)
	{
		for (index = 0; index < size; index++)
		{
			printf("Value checked array[%d] = [%d]\n", index, array[index]);
			if (value == array[index])
				return (index);
		}
	}

	return (-1);
}
