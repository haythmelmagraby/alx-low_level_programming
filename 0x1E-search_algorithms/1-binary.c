#include "search_algos.h"

/**
 * int binary_search- searches for a value in an array of integers.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in the array.
 * @value: the value to search for.
 * Return:  first index where value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, i;

	if (array == NULL)
		return (-1);
	while (r >= l)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ",array[i]);
		printf("%d\n",array[i]);
		i = l + (r - l) / 2;
		if (array[i] == value)
			return (i);
		if(array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}
