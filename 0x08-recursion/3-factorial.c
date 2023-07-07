#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number
 * Return: n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		int m = n * factorial(n - 1);
		return (m);
	}
}
