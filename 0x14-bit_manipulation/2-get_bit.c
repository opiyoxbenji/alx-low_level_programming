#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number of bits
 * @index: the index starting from 0 of the bit you want to get
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_mask;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit_mask = 1UL << index;

	bit_value = (n & bit_mask) ? 1 : 0;

	return (bit_value);
}
