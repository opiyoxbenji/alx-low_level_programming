#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int start;
	int i = start;

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2;
	}

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
