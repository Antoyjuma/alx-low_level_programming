#include <stdio.h>

/**
 * main - prints all single-digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char z;

	for (z = '0'; z <= '9'; z++)
		putchar(z);

	putchar('\n');
	return (0);
}
