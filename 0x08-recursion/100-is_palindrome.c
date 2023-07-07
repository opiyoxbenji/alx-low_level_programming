#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if @s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;
	char *start, *end;

	if (*s == '\0')
		return (1);

	while (*(s + len))
		len++;

	start = s;
	end = s + len - 1;

	while (start < end)
	{
		if (*start != *end)
			return (0);

		start++;
		end--;
	}

	return (1);
}
