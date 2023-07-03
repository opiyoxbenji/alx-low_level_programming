#include "main.h"

/**
 * _memcpy - copies the memory area
 * @src: source of the memory
 * @dest: destination of the memory
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = n;
	int i;

	if (x > 0)
	{
		for (i = 0; i < x; i++)
		{
			dest[i] = src[i];
		}
	}

	return (dest);
}
