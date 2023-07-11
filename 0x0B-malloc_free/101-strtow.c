#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count the words in.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count = 0, i, len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of strings (words),
 *         NULL if str is NULL or empty or if the function fails.
 */
char **strtow(char *str)
{
	char **words;
	int words_count, i, j, k, len, start;

	if (str == NULL || *str == '\0')
		return (NULL);

	words_count = count_words(str);
	words = malloc((words_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < words_count; i++)
	{
		while (str[j] == ' ')
			j++;
		start = j;
		while (str[j] != ' ' && str[j] != '\0')
			j++;
		len = j - start;

		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		strncpy(words[i], str + start, len);
		words[i][len] = '\0';
	}

	words[words_count] = NULL;
	return (words);
}
