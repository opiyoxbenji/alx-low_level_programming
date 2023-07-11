#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: arguments ac
 * @av: characters av
 *
 * Return: ptr, NULL if failed
 */
char *argstostr(int ac, char **av)
{
	int a, b;
	char *ptr;
	int c = 0;
	int d = 0;

	if (ac == 0)
	{
		return (NULL);
	}
	if (av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			c++;
	}
	c += ac;
	ptr = malloc(sizeof(char) * c + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			ptr[d] = av[a][b];
			d++;
		}
		if (ptr[d] == '\0')
		{
			ptr[d++] = '\n';
		}
	}
	return (ptr);
}
