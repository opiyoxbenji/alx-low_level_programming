#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: number of bytes of memory
 * @s: pointer to n
 * @b: the constant
 *
 * Return: pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}

	return (s);
}
