#include "main.h"
#include <stdlib.h>

/**
 * multiply - Multiplies two positive numbers
 * @num1: First number to multiply
 * @num2: Second number to multiply
 *
 * Return: The product of the multiplication
 */
unsigned int multiply(unsigned int num1, unsigned int num2)
{
	return num1 * num2;
}

/**
 * print_error - Prints the error message and exits with status 98
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

int main(int argc, char *argv[])
{
	unsigned int num1, num2, result;

	if (argc != 3)
		print_error();

	for (int i = 1; i < argc; i++)
	{
		char *ptr = argv[i];

		while (*ptr != '\0');
		{
			if (*ptr < '0' || *ptr > '9')
				print_error();
			ptr++;
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply(num1, num2);

	printf("%u\n", result);

	return (0);
}
