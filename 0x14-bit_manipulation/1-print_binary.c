#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number to print in binary.
 * Return: void..
 */

void print_binary(unsigned long int n)
{
	int m, i, flag = 0;
	long int num = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		num = n >> i;
		m = (num) & 1;
		if (m || flag)
		{
			if (m)
				_putchar('1');
			else
				_putchar('0');
			flag = 1;
		}

	}
}


