#include <stdio.h>
#include "main.h"
int _square_root(int i, int root);

/**
 * _sqrt_recursion - Entry point
 * @n: input integer
 * Return: returns the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_square_root(1, n));
}

/**
 * _square_root - entry point, finds square root
 * @i : previous integer
 * @root: root integer
 * Return: the square root
 */

int _square_root(int i, int root)
{
	if (i > root)
		return (-1);
	else if (i * i == root)
		return (i);
	return (_square_root(i + 1, root));
}
