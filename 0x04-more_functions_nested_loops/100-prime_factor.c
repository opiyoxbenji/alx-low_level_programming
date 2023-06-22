#include <stdio.h>

/**
 * main - Entry point
 * Description: finds and prints the largest prime factor
 * Return: 0
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long divider = 2;

	while (divider < num)
	{
		if (num % divider == 0)
		{
			num /= divider;
			divider = 2;
		}
		else
			divider++;
	}

	printf("%lu\n", num);

	return (0);
}

