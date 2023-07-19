#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: the function
 */
void print_name(char *name, void (*f)(char *))
{
	printf("Name: %s\n", name);
	f(name);
}
