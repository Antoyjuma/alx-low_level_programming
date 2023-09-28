
 #include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: a pointer to the num to change.
 * @index: index of the bit to set to 1.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
