#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *loop_node = NULL;

	current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current->next >= current)
		{
			loop_node = current;
			break;
		}

		current = current->next;
	}

	if (loop_node != NULL)
	{
		current = head;
		count = 0;

		while (current != loop_node)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			current = current->next;
			count++;
		}

		printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
		exit(98);
	}

	return (count);
}
