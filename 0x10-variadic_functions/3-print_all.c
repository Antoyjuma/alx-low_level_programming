#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
* print_all - Print character.
* @format: A list of type of arguments passed to the function.
* Return: Nothing
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	char *temp;
	int j = 0;

	va_start(ap, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", (char) va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ap, double));
				break;
			case 's':
				temp = va_arg(ap, char*);
				if (temp != NULL)
				{
					printf("%s", temp);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[j] == 'c' || format[j] == 'i' || format[j] == 'f' ||
					format[j] == 's') && format[(j + 1)] != '\0')
			printf(", ");
		j++;
	}
	va_end(ap);
	printf("\n");
}
