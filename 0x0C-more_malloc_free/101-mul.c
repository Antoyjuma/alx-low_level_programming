#include "main.h"

/**
 * main - print result of multiplication of +ve nums, followed by a new line.
 *
 * num1 and num2 will be passed in base 10.
 * Print the result, followed by a new line.
 * If the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98
 * num1 and num2 should only be composed of digits. If not,
 * print Error, followed by a new line, and exit with a status of 98,
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: - Always 0 on success.
 *
 */
int main(int argc, char *argv[])
{
	int j, k, mul = 0;

	for (j = 1; j < argc; j++)
	{
		for (k = 0; argv[j][k]; k++)
		{
			if (argv[j][k] < '0' || argv[j][k] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
		mul = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", mul);

	return (0);
}
