#include "main.h"

/**
 * flip_bits - Calculates the number of bits needed to flip to get from one
 * number to another.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 * Return: The number of bits needed to be flipped to convert 'n' to 'm'.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		xor_result &= (xor_result - 1);
		count++;
	}

	return (count);
}
