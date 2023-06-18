#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digits of randomly generated number
 * Return: Always (Success)
 *
 */
int main(void)
{
	int n, l.digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l.digit = n % 10;
	if (l.digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n" n, l.digit);
	}
	else if (l.digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n" n, l.digit);
	}
	else if (l.digit < 6 && l.digit != 0)
	{
		printf("l.digit of %d is %d and is less than 6 and not 0\n" n, l.digit);
	}
	return (0);
}
