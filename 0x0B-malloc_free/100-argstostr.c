#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - convert the params passed to the program to string.
 * @ac: the argument count.
 * @av: the argument vector.
 *
 * Return: length
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, j = 0, k = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (j < ac)
	{
		while (av[j][k])
		{
			ch++;
			k++;
		}

		k = 0;
		j++;
	}

	s = malloc((sizeof(char) * ch) + ac + 1);

	j = 0;
	while (av[j])
	{
		while (av[j][k])
		{
			s[l] = av[j][k];
			l++;
			k++;
		}

		s[l] = '\n';

		k = 0;
		l++;
		j++;
	}

	l++;
	s[l] = '\0';
	return (s);
}
