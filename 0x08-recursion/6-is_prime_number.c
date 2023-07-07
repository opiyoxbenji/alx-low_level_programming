#include "main.h"


/**
 * is_prime - function to find the prime number
 * @a: the integer n to be found
 * @b: integer b
 * Return: 1 if a prime number, 0 otherwise
 */
int is_prime(unsigned int a, unsigned int b)
{
	if (a % b == 0)
	{
		if (a == b)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(a, b + 1));
}

/**
 * is_prime_number - function to find the prime number
 * @n: the integer n to be found
 * Return: 1 if a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
