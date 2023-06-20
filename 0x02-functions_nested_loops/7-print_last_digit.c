#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the value to check
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int result;

	if (n > 0)
	{
		result = n % 10;
	}
	else
	{
		result = -n % 10;
	}

	return (result);
}
