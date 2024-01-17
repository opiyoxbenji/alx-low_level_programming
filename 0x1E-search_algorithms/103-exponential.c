#include "search_algos.h"

/**
 * _binary_search - search sorted array for a value
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * @start: start index
 * @stop: end index
 * Return: index of value if found else -1
 */
int _binary_search(int *array, size_t size,
		int value, size_t start, size_t stop)
{
	size_t i;
	ssize_t mid;

	while (start <= stop)
	{
		printf("Searching in array: %d", array[start]);
		for (i = start + 1; i <= stop; i++)
			printf(", %d", array[i]);
		printf("\n");

		mid = start + (stop - start) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			start = mid + 1;
		else
			stop = mid - 1;
	}

	return (-1);
}


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
	int exp = 0;
	size_t start, stop;

	if (array == NULL)
		return (-1);

	while (((size_t)1 << exp) < size && array[(size_t)1 << exp] < value)
	{
		printf("Value checked array[%ld] = [%d]\n",
				((size_t)1 << exp), array[(size_t)1 << exp]);
		exp++;
	}

	printf("Value found between indexes [%d] and [%ld]\n", 1 << (exp - 1),
			((size_t)1 << exp) >= size ? size - 1 : (size_t)1 << exp);
	start = (size_t)1 << (exp - 1);
	stop = ((size_t)1 << exp) >= size ? size - 1 : (size_t)1 << exp;

	return (_binary_search(array, stop - start + 1, value, start, stop));
}
