#include "main.h"

/**
 * get_endianness - Checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	union {
		unsigned int num;
		unsigned char bytes[sizeof(unsigned int)];
	} data;

	data.num = 1;

	return (data.bytes[0] == 1) ? 1 : 0;
}
