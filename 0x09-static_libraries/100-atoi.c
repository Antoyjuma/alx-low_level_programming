#include "main.h"

/**
    *_atoi - converts a string to integer.
    *@s: string.
    *Return: converted integer.
*/

int _atoi(char *s)
{
	int q, value, sign;
	char c;

	q = 0;
	value = 0;
	sign = -1;

	while (s[q] != '\0')
	{
		c = s[q];
		if (c == '-')
			sign *= -1;
		else if (c >= '0' && c <= '9')
		{
			if (value < 0)
				value = value * 10 - (c - '0');
			else
				value = (c - '0') * -1;
			/* Ensure the next char is a numeric */
			if (s[q + 1] < '0' || s[q + 1] > '9')
				break;
		}
		q++;
	}
	if (sign < 0)
		value *= -1;

	return (value);
}
