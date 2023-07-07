#include "main.h"

/**
    *_memset - this function fills memory with a constant byte.
    *@b: address of memory to print.
    *@s: size of the memory to print.
    *@n: bytes of the memory.
    *Return: success.
    */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
