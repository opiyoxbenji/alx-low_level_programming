#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the nth node, or NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
