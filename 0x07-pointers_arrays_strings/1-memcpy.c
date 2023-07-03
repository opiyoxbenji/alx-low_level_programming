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
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (n > 0)
	{
		src_ptr = dest_ptr;
		dest_ptr++;
		src_ptr++;
		n--;
	}

	return (dest);
}
