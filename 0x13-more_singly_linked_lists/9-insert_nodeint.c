#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in lists
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index of the list where the new node should be added (starting at 0).
 * @n: Value to be assigned to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node = NULL;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}


	prev_node = *head;
	while (count < idx - 1)
	{
		if (prev_node == NULL)
		{
			free(new_node);
			return (NULL);
		}

		prev_node = prev_node->next;
		count++;
	}

	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return (new_node);
}
