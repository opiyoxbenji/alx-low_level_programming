#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: The format string containing the types to print
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *separ = "";
	va_list ar;

	va_start(ar, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separ, va_arg(ar, int));
				break;
			case 'i':
				printf("%s%d", separ, va_arg(ar, int));
				break;
			case 'f':
				printf("%s%f", separ, va_arg(ar, double));
				break;
			case 's':
				string = va_arg(ar, char *);
				if (!string)
					string = "(nil)";
				printf("%s%s", separ, string);
				break;
			default:
				i++;
				continue;
		}
		separ = ", ";
		i++;
	}

	va_end(ar);
	printf("\n");
}
