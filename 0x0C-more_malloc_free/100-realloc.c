#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory location previously allocated with a call to
 * malloc
 * @old_size: the size of the allocated space
 * @new_size: the new size of the new memory blank
 *
 * Return: Pointer to the newly allocated memory block
 * NULL if new_size is 0 and ptr is not NULL
 * NULL if the allocation fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_new;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	ptr_new = malloc(new_size);

	if (ptr_new == NULL)
	{
		return (NULL);
	}

	if (new_size < old_size)
	{
		old_size = new_size;
	}

	for (i = 0; i < old_size; i++)
	{
		*((char *)ptr_new + i) = *((char *)ptr + i);
	}

	free(ptr);

	return (ptr_new);
}
