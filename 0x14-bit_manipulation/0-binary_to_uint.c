#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number, or if
 *	there is one or more characters in the string b that is not 0 or 1
 *	b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int base = 1;

	if (b == NULL)
		return (0);

	while (*b)
		b++;

	b--;

	while (*b != '\0' && (*b == '0' || *b == '1'))
	{
		if (*b == '1')
			result += base;

		base *= 2;
		b--;
	}

	return (result);
}
