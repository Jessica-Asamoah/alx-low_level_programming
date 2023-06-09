#include "main.h"

/**
 * _islower - Function to print lowercase
 * @c: Input character
 *
 * Return: 1(lowercase) 0(uppercase)
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
