#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a', k = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (k <= 'Z')
	{
		putchar(k);
		k++;
	}

	putchar('\n');

	return (0);
}
