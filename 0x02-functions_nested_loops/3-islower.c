#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point
 * @c: An input character
 * Description: function checks for lowercase character
 * Return: if it is lowercase, return 1. Return 0 if it uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i<= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return(lower);
}
