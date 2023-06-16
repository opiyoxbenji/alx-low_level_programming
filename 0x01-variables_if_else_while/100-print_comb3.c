#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int combs[] = {01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89}
	int num_combs = sizeof(combinations) / sizeof(combinations[0]);

	int i;

	for (i = 0; i < num_combs; i++)
	{
		int comb = combs[i];
		int first_digit = comb / 10;
		int second_digit = comb % 10;

		putchar('0' + first_digit);
		putchar('0' + second_digit);

		if (i < num_combs - 1)
		{
			putchar('\n');
			putchar(' ');
		}
	}

	putchar('\n');


	return (0);
}
