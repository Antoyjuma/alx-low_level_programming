#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - a function that sums all of its parameters.
* @n: number of arguments, number of parameters
* Return: Always 0.The sum of all parameters
*
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int j;

	va_start(valist, n);

	for (j = 0; j < n; j++)
	{
		sum += va_arg(valist, int);
	}

	va_end(valist);

	return (sum);
}
