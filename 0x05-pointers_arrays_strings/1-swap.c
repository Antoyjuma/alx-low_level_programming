#include <stdio.h>

/**
 * swap_int - Swaps the values of two integer
 * @a: Swap the first integer
 * @b: Swap the second integer
 *
 * Retrun: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int p = *a;
	*a = *b;
	*b = p;
}
