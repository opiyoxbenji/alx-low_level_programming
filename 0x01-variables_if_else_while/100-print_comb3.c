#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n;

	for (m = 0; m < 9; m++)
	{
		for (n = m + 1; n <= 9; n++)
		{
			putchar('0' + m);
			putchar('0' + n);
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
