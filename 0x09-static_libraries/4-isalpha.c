#include "main.h"
/**
*_isalpha - checks if for alphabetic character.
*@d: int used for the function's argument.
*Description: use the _isalpha func.
*Return: 1 if c is a letter lowercase or uppercase.
*0 otherwise
*/
int _isalpha(int d)
{

		if ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z'))
		{
			return (1);
		}
		else
			return (0);
}
