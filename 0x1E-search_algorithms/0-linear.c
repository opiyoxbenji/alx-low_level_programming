#include "search_algos.h"

/**
 * linear_search - searches for values in an array with linear search algorithm
 * @array: pointer to first element
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: -1 if value is not present or the array is NULL
 * Otherwise, returns the index of the first occurence of the value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
