#include <stdio.h>
#include "main.h"

/**
*main - print number of arguments passed to program.
*@argc: argument counter.
*@argv: pointer to array arguments.
*
*Return: success (0)
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
