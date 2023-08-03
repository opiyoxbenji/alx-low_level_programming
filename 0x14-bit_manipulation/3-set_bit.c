#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to an unsigned long integer to modify.
 * @index: The index of the bit to set
 * Return: 1 if the operation was successful, or -1 if an error occurred (such
 *	as a NULL pointer 'n' or an invalid index).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	bit_mask = 1UL << index;
	*n |= bit_mask;

	return (1);
}
