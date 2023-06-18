#include <stdio.h>
/**
 * main - print alphabet in lowercase and uppercase
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char x, y;

	for (x = 'a'; x <= 'z'; x++)
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar (x, y);
	}
	putchar('\n');

	return (0);
}
