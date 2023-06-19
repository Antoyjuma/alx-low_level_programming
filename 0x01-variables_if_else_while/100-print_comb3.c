#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b, a;

	for (b = '0'; a < '9'; b++)
	{
	for (a = b + 1; a <= '9'; a++)
	{
	if (a != b)
	putchar(b);
	putchar(a);
	if (b == '8' && a == '9')
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
