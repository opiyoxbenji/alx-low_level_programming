#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	prev = 0;

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

		if (array[prev + step] >= value || prev + step >= size)
			break;

		prev += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + step);

	for (i = prev; i <= prev + step && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
