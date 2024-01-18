#include "search_algos.h"

/**
 * binnary_search - searches for a value in a sorted array
 * @array: pointer to the first element
 * @low: starting point of index
 * @high: ending point of index
 * @value: value to search for
 * Return: index where value is located
 */
int binnary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, a;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: %d", array[low]);
		for (a = low + 1; a <= high; a++)
		{
			printf(", %d", array[a]);
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
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

	return (binnary_search(array, stop - start + 1, value, start, stop));
}
