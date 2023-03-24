#include <stdio.h>
#include <stdlib.h>

/**
 * _isupper - entry point
 * @c : input character
 * Description: function checks for uppercase character
 * Return: 1 if c is uppercase or 0 if c is lowercase
 */

int _isupper(int c)
{
	char i;
	int uppercase = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			uppercase = 1;
	}

	return (uppercase);
}
