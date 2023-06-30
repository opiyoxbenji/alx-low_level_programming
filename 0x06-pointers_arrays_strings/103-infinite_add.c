#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * infinite_add - adds two numbers
 *
 * @n1: first number
 * @n2: second number
 * @r: used to store the result
 * @size_r: buffer size
 *
 * Return: size of the buffer.
 */

char* reverse_string(char* str)
{
	int len = strlen(str);
	int i, j;
	char temp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	return (str);
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int max_len = len1 > len2 ? len1 : len2;
	int carry = 0;
	int sum, i;

	if (max_len + 1 > size_r)
	{
		return (0);
	}

	for (i = 0; i < max_len; i++)
	{
		int digit1 = i < len1 ? n1[len1 - 1 - i] - '0' : 0;
		int digit2 = i < len2 ? n2[len2 - 1 - i] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[i] = '0' + (sum % 10);
	}

	if (carry > 0)
	{
		if (i + 1 > size_r)
		{
			return (0);
		}

		r[i] = '0' + carry;
		i++;
	}

	r[i] = '\0';

	return reverse_string(r);
}
