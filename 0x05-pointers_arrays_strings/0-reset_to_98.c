#include "main.h"

/**
 * reset_to_98 - updates the value of an integer to 98
 * @n: the parameter
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	int a = 0;

	*n = 98;
	a = *n;

	_putchar(a);
}
