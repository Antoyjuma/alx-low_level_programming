
#include "main.h"

/**
  *_isdigit - checks for digit btwn 0 to 9.
  *@d: character input.
  *Return: 1 if d is a digit, 0 if otherwise.
  */

int _isdigit(int d)
{
	if ((d >= 48) && (d <= 57))
	{
		return (1);
	}
	else
	return (0);
}

