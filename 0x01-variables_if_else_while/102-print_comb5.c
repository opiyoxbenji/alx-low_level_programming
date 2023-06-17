#include <stdio.h>


/**
 * main - Entry point
 * Description: Write a program that prints all possible different
 *  combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j;

	while (i <= 99)
	{
		j = i;
		while (j <= 99)
		{
			if (j != i)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);

				if (i != 99 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
