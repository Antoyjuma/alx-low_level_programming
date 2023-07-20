#include "function_pointers.h"
/**
* int_index - this functions find the index of a int
*@array: the array to find the index
*@size: the size of the array
*@cmp: this a function pointer.
* Description: this function find the index of a int)?
* Return: this is a void function no return,
* -1 if no element found or no element in the array.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		if (cmp(*(array + j)))
			return (j);
	}

	return (-1);
}
