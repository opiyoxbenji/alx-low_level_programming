#include "main.h"

/**
 * _strcpy - copies the string pointed to by src including null byte
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	dest[j] = '\0';

	return (dest);
}
