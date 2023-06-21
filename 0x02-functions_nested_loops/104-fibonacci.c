#include <stdio.h>

/**
 * main - Entry point
 * finds and prints the first 98 fibonacci numbers starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	unsigned int prev = 1, current = 2, next;

	printf("%u, %u", prev, current);

	for (int i = 0; i < 96; i++)
	{
		next = prev + current;
		printf(", %u", next);
		prev = current;
		current = next;
	}

	printf("\n");

	return (0);
}
