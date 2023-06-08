#include "main.h"

/**
 * factorial - funtion that returns the factorial of a number
 * @n: Input integer
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
