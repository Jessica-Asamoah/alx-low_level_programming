#include "main.h"
int is_divisible(int num, int div);

/**
 * is_prime_number - function that checks for a prime number
 * @n: Input integer
 * Return: 1(prime) 0(otherwise)
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (is_divisible(n, div));
}

/**
 * is_divisible - Function that checks if a number is divisible
 * @num: the number to checked
 * @div: the result of the division
 * Return: 1(divisible) 0(not divisible)
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}
