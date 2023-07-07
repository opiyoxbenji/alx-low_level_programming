#include "main.h"

/**
 * power_operand - returns the natural square root of a number.
 * @n: input integer n.
 * @p: int p.
 * Return: -1
 */
int power_operand(int n, int p)
{
	if (p % (n / p) == 0)
	{
		if (p * (n / p) == n)
			return (p);
		else
			return (-1);
	}
	return (0 + power_operand(n, p + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input integer n.
 * Return: -1 for a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operand(n, 2));
}
