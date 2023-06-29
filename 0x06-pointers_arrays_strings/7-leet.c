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
	int count = 0, i;
	int low_letters[] = {97, 101, 111, 116, 109};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(str + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + count) == low_letters[i] || *(str + count) == upp_letters[i])
			{
				*(str + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (str);
}
