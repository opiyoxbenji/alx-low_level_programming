#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: for the triangle
 */
void print_triangle(int size)
{
	int i, a, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - i); j++)
			{
				_putchar(' ');
			}
			for (a = 1; a <= i; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
