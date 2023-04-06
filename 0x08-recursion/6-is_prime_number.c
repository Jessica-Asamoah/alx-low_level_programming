#include <stdio.h>
#include "main.h"
int divide(int i, int mod);

/**
 * is_prime_number - Entry point
 * @n: input integer
 * Return: returns 1 if prime and 0 otherwise
 */

int is_prime_number(int n)
{
	int mod = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);

	return (divide(n, mod));
}

/**
 * divide - entry point
 * @i: input integer
 * @mod: input integer
 * Return: returns 0 if number is not divisible otherwise 1
 */

int divide(int i, int mod)
{
	if (i % mod == 0)
		return (0);

	if (mod == i / 2)
		return (1);

	return (divide(i, mod + 1));
}
