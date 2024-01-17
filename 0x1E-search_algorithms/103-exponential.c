#include "search_algos.h"
#include <stdio.h>

/**
 * exponential_search - Searches sorted arrays with Exponential search
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, i, low, high;

	if (array == NULL || size == 0)
		return (-1);

	for (bound = 1; bound < size && array[bound] < value; bound *= 2)
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);

	low = bound / 2;
	high = (bound < size) ? bound : size;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high - 1);

	for (low = bound / 2; low <= high;)
	{
		size_t mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i < high - 1; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
