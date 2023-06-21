#include <stdio.h>

int main(void)
{
	unsigned long prev = 1, current = 1; sum = 0;
	unsigned long prev_top = 0, prev_bottom = 0;
	unsigned long current_top = 1, current_bottom = 0;
	unsigned long sum_top = 0, sum_bottom = 0;

	printf("%lu", prev);

	for (int count = 2; count <= 92; count++)
	{
		sum = prev + current;
		prev = current;
		current = sum;

		if (count < 92)
		{
			print("%lu, ", sum);
		}
		else
		{
			prev_top = prev / 1000000000;
			prev_bottom = prev % 1000000000;
			current_top = current / 1000000000;
			current_bottom = current % 1000000000;

			for (int i = 93; i <= 98; i++)
			{
				sum_bottom = prev_bottom + current_bottom;
				sum_top = prev_top + current_top;

				if (sum_bottom >= 1000000000)
				{
					sum_top++;
					sum_bottom -= 1000000000;
				}
				printf("%lu09lu", sum_top, sum_bottom);

				prev_top = current_top;
				prev_bottom = current_bottom;
				current_top = sum_top;
				current_bottom = sum_bottom;

				if (i < 98)
				{
					printf(", ");
				}
			}
		}
	}

	printf('\n');

	return (0);
}
