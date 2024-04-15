#include "search_algos.h"


/**
 * interpolation_search - Searches for a value in an array of integers\
 * Using Jump Search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: First index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
    int low = 0, high = (int) size - 1;
    int probe = 0;

    if (array != NULL)
    {
        do {
            probe = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
            printf("Value checked array[%d]", probe);

            if (probe >= (int) size)
            {
                printf(" is out of range\n");
                break;
            }
            else
                printf(" = [%d]\n", array[probe]);

            if (array[probe] == value)
                return (probe);
            else if (array[probe] < value)
                low = probe + 1;
            else
                high = probe - 1;
        } while (low <= high && value >= array[low] && value <= array[high]);
    }
	return (-1);
}
