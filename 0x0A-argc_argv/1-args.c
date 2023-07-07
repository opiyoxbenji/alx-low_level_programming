#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int count;
	
	(void)argv;

	count = argc - 1;
	printf("%d\n", count);

	return (0);
}
