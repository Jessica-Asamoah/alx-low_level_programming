#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Entry point
 * @x: input integer
 * @y: input integer
 * Return: returns value of x and raised to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
