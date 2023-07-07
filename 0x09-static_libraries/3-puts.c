#include "main.h"
/**
*_puts - funstion that prints a string,
*followed by a new line, to stdout
*@str: string pointer
*Return: void
*/
void _puts(char *str)
{
	int s = 0;

	while (str[s])
	{
		putchar (str[s]);
		s++;
	}
	putchar('\n');
}
