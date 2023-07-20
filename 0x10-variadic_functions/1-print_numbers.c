#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Function that check the code for Holberton School students.
* @separator: An input string character separator of numbers.
* @n: number of parameters
* @...: Other parameters
* Return: Success
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int j = 0;
	int nums;

	va_start(ap, n);
	for (; j < n; j++)
	{
		nums = va_arg(ap, int);
		printf("%d", nums);

		if (separator == NULL)
			continue;

		if (j < n - 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(ap);
}
