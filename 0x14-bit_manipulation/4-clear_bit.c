#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: pointer to an unsigned long integer to modify
 * @index: the inex of the bit to set
 * Return: 1 if worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	bit_mask = ~(1 << index);
	*n &= *n & bit_mask;

	return (1);
}
