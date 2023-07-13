#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array of elements
 * @nmemb: The number of elements to allocate memory for
 * @size: The size of each element in bytes
 *
 * Return: On success, a pointer to the allocated memory.
 * If nmemb or size is 0, returns NULL.
 * If malloc fails, returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	/* check if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocate memory using malloc */
	ptr = malloc(nmemb * size);

	/* check if malloc is finished */
	if (ptr == NULL)
		return (NULL);

	/* set the allocated memory to zero */
	/* using the memset func from the string.h lib */
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
