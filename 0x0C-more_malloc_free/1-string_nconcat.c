#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes
 *
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2] && len2 < n)
		len2++;

	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new_str[i] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		new_str[len1 + i] = s2[i];

	new_str[len1 + i] = '\0';

	return (new_str);
}
