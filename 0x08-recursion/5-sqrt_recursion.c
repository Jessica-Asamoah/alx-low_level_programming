#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Entry point
 * @n: input integer
 * Return: returns the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n ** 2 - 1));
}
