#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Alwats 0 (Success)
 *
 */
int main(void)
{
	int r;
	char d;

	for (r = '0'; r <= '9'; r++)
		putchar(r);
	for (d = 'a'; d <= 'f'; d++)
		putchar(d);
	putchar('\n');

	return (0);
}
