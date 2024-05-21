#include "search_algos.h"

/**
 * linear_search- searches for a value in an array of integers.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in the array.
 * @value: the value to search for.
 * Return:  first index where value is located.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
