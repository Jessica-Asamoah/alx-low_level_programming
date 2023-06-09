#include "main.h"

/**
 * _isalpha - Function that checks for alphabets
 * @c: Input character
 *
 * Return: 1(alphabet) 0(otherwise)
 */

int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
