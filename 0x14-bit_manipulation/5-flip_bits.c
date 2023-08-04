#include "main.h"

/**
 * flip_bits - a function that returns the number of bits.
 * you would like to flip to get from another number.
 * @n: first num to be counted..
 * @m: second number to be counted.
 * Return: 0 if big endian, 1 if little endian.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int count;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}

	return (count);
}
