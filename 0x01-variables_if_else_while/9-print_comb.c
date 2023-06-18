#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int e;

	for (e = '0'; e <= '9'; e++)
		putchar(e);
	if (e != '9')
		putchar(", ");
	putchar(' ');
	putchar('\n');
	return (0);
}
