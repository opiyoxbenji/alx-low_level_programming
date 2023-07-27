#include <stddef.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_h
 * @h: pointer to the head of the list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
