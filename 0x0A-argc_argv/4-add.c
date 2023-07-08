#include <stdio.h> /* printf */
#include <stdlib.h> /* atoi */
#include <stdbool.h> /* bool data type */

/**
   * is_num - iterate through each argv to test if it's a number,
   * @argvv: a argv
   * Return: true only if entire string is a number, false if not.
   */

bool is_num(char *argvv)
{
	int q = 0;

	for (q = 0; argvv[q]; q++)
	{
		if (!(argvv[q] >= '0' && argvv[q] <= '9'))
			return (0);
	}
	return (1);
}

/**
   * main - print sum if all arguments given are numbers.
   * @argc: argument counter,
   * @argv: arguments,
   * Return: 0 on success, 1 if an argument wasn't a number.
   */

int main(int argc, char *argv[])
{
	int t = 1;
	int sum = 0;

	/* validate input */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* check all arguments to add numbers */
	while (t < argc)
	{
		if (is_num(argv[t]))
			sum += atoi(argv[t]);
		else
		{
			printf("Error\n");
			return (1);
		}
		t++;
	}

	printf("%d\n", sum);
	return (0);
}
