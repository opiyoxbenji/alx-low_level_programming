#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len, len1, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = 0;
	while (s1[len] != '\0')
		len++;

	len1 = 0;
	while (s2[len1] != '\0')
		len1++;

	concat = malloc((len + len1 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		concat[i] = s1[i];

	for (j = 0; j < len1; j++)
		concat[i] = s2[i];

	return (concat);
}
