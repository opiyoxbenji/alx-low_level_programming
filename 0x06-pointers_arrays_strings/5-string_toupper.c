#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string
 *
 * Return: the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		i++;
	}
	
	return str;
}
