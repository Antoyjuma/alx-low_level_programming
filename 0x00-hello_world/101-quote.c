#include <stdio.h>
#include <unistd.h>
/**
 * main - A c program taht prints a line to the standard error
 * Return: 1 (Success)
 */
int main(void)
{
	char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fputs(err, stdout);
	return (1);
}
