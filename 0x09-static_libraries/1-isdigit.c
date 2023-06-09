#include "main.h"

/**
 * _isdigit - Function that checks for a digit
 * @c: Input integer
 *
 * Return: 1(digit) or 0(otherwise)
 */

int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
