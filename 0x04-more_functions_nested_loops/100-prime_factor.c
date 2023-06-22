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
			num /= divider;
		else
			divider++;
	}

	printf("%lu", num);

	return (0);
}
