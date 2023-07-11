#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenating two strings of any size.
 * @s1: the first string to concatenate.
 * @s2: the second string to concatenate.
 *
 * Return: the two strings concatenated.
 */
char *str_concat(char *s1, char *s2)
{
	int j = 0, k = 0, l = 0, m = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[j])
		j++;

	while (s2[k])
		k++;

	m = j + k;
	s = malloc((sizeof(char) * m) + 1);

	if (s == NULL)
		return (NULL);

	k = 0;

	while (l < m)
	{
		if (l <= m)
			s[l] = s1[l];

		if (l >= j)
		{
			s[l] = s2[k];
			k++;
		}

		l++;
	}

	s[l] = '\0';
	return (s);
}
