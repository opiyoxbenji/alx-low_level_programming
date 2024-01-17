#include "search_algos.h"

/**
 * binary_search - searches for array values with binary search
 * @array: pointer to the first array element to be searched
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: -1, if the value is not found or array is NULL
 * Otherwise, the index of the value found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
