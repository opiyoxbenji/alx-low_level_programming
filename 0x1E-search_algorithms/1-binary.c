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
	size_t i, m, n;

	if (array == NULL)
		return (-1);

	/* Binary Search Loop */
	for (m = 0, n = size - 1; n >= m;)
	{
		printf("Searching in array:");
		for (i = m; i < n; i++)
			printf("%d,", array[i]);
		printf("%d\n", array[i]);

		i = m + (n - m) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			n = i - 1;
		else
			m = i + 1;
	}

	return (-1);
}
