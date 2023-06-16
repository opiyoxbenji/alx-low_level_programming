#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	char k = 'A';

	while (k <= 'Z')
	{
		putchar(k);
		k++;
	}

	putchar('\n');

	return (0);
}
