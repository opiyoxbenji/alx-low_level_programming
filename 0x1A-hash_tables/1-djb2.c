#include <stdio.h>
#include <stdlib.h>
#include <hash_tables.h>

/*
 * hash_djb2 - Calculate the DJB2 hash value for the given string.
 *
 * This function takes an input string and calculates its DJB2 hash value using
 * the DJB2 algorithm. The hash value is returned as an unsigned long int.
 *
 * @param str: The input string for which the hash is calculated.
 * @return: The DJB2 hash value of the input string.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
