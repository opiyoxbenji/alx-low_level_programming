#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit(0 through 9)
 * @c: represents the digit
 * Return: 1 if is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int i = 0;

	while (i < 10)
	{
		if (c == i)
			return (1);
		i++;
	}

	return (0);
}
