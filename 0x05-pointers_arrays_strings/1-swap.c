#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: one the integers
 * @b: another integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int k = *a;
	*a = *b;
	*b = k;
}
