#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_strings - A function that prints strings followed by a new linie.
* @n: number of argument or parameters
* @separator: character separator of numbers
* Return: Always 0.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int j;
	char *str;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(string, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", str);
		if (n == j + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
