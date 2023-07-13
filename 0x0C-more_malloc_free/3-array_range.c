#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum amount of values
 * @max: the maximum amount of values
 *
 * Return: On success, the pointer the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	/* check if min is greater than max */
	if (min > max)
		return (NULL);

	/* calculate the size of the array */
	size = max - min + 1;

	/* allocate the array with values from min to max */
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	/* populate the array with values from min to max */
	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
