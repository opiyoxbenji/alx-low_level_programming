#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = length - 1;

	if (s == NULL)
	return;

	while (s[length] != '\0')
	{
		length++;
	}

	while (start < end)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
    	}
}
