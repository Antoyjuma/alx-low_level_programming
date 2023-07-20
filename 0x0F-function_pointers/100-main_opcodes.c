#include<stdio.h>
#include<stdlib.h>
/**
 * main- Entry point. Prints the opcodes of itself.
(* a blank line
 *@argc: The number of arguments supplied to the program.
 *@argv: An array of pointers to the arguments.
* Description: this program prints opcodes in hexa)?
* Return: 0 in succes
*/
int main(int argc, char *argv[])
{
	int j, n;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (j = 0; j < n; j++)
	{
		printf("%02hhx", *((char *)main + j));
		if (j < n - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
