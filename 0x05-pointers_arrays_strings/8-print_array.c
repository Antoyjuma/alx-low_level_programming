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
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}
	putchar(10);
}
