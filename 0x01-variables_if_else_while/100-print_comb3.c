#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits
 * Return: Alwyas 0 (Success)
 *
 */i
int main(void)
{
	int a;
	int b;

	for (a = 48; a < 57; a++)
	for (b = 49; b < 58; b++)
	{
		if (b > a)
		{
			putchar(a);
			putchar(b);
			if (a == 56 && b == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
		}
	putchar('\n');
	return (0);
}
