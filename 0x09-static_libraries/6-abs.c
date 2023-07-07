#include "main.h"
/**
* _abs - program computes the absolute value of an integer
* @n: int used for function's argument
* Return: the absolute value of the integer
*/
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
