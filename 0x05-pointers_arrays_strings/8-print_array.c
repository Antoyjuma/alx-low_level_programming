#include <stdio.h>
#include "main.h"

/**
*print_array - prints n elements of an array of integers,
*followed by a new line
*@n: Number of elements of the array to be printed
*@a: array
*Return: void
*/
void print_array(int *a, int n);
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
