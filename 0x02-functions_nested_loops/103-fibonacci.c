#include <stdio.h>
/**
 * main - Entry point
 * A program that finds and prints the sum of the even-valued terms
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0, previous = 0, current = 1, next;

	while (current <= 4000000)
	{
		if (current % 2 == 0)
		{
			sum += current;
		}
		next = previous + current;
		previous = current;
		current = next;
	}

	printf("%d\n", sum);
	return (0);
}
