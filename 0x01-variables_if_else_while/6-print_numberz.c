#include <stdio.h>

/**
 * main - prints all single-digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z = 0;

	while (z <= 9)
	{
		putchar(z + '0');
		z++;
	}

	putchar('\n');
	return (0);
}
