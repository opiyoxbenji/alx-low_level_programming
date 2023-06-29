#include "main.h"
#include <stdio.h>

/**
 * leet - replaces certain characters to create a 'leet' number version
 * @str: the string to modify
 *
 * Return: pointer to the modified string or NULL if str is NULL
 */
char *leet(char *str)
{
	char *letter = (char *)str;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*letter != '\0')
	{
		if (*letter == 'a' || *letter == 'A')
		{
			*letter = '4';
		}
		else if (*letter == 'e' || *letter == 'E')
		{
			*letter = '3';
		}
		else if (*letter == 'o' || *letter == 'O')
		{
			*letter = '0';
		}
		else if (*letter == 't' || *letter == 'T')
		{
			*letter = '7';
		}
		else if (*letter == 'l' || *letter == 'L')
		{
			*letter = '1';
		}

		letter++;
	}

	return (str);
}
