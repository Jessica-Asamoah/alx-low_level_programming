#include <stdio.h>
#include "main.h"

/**
 * _isalpha - entry point
 * Description: function checks for alphabetic character
 * Return: if it lowercase or uppercase return 1. Return 0 otherwise
 */
int _isalpha(int c)
{
	char upper, lower;
	int alpha = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			if (c == upper || c == lower)
				alpha = 1;
		}
	}
	return (alpha);
}
