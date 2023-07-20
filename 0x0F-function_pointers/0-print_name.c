#include "function_pointers.h"

/**
* print_name - this functions prints a name.
* @name: name character string to print.
* @f: a pointer function that prints name
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
