#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: destination for the copied string
 * @src: source of the string
 * @n: the string
 *
 * Return: destination if copy successful
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
