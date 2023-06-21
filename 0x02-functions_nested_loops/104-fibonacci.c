#include <stdio.h>

/**
 * main - Entry point
 * finds and prints the first 98 fibonacci numbers starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	unsigned int prev = 1, current = 2, next;
	int i = 2;

	printf("1, 2");

	while (i < 98)
	{
		next = prev + current;
		printf(", %u", next);
		prev = current;
		current = next;
		i++;
	}

	printf(", %u\n", prev + current);

	return (0);
}
