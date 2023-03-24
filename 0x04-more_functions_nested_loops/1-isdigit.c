#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - entry point
 * @c : input integer
 * Description: function checks for a digit
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	int i;
	int digit = 0;

	for (i = 0; i < 10; i++)
	{
		if (i == c)
			digit = 1;
	}

	return (digit);
}
