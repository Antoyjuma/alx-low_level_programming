#include "main.h"

/**
   * get_bit - gets the bit in index
   * @n: the num
   * @index: index number.
   * Return: 1 or 0
   */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}

