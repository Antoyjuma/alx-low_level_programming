#include"3-calc.h"
/**
* get_op_func - Selects the correct function to perform
* the operation asked by the user.
* @s: The operator passed as argument.
*
* Return: A pointer to the function corresponding
* to the operator given as a parameter.
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int j;

	j = 0;
	while (j < 5)
	{
		if (strcmp(s, ops[j].op) == 0)
		{
			return (*(ops[j]).f);
		}
		j++;
	}
	return (NULL);
}
