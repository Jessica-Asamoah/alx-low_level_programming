#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Function that return the sum of a and b
 * @a: Input integer
 * @b: Input integer
 *
 * Return: The result of sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that returns the subtraction of a and b
 * @a: Input Integer
 * @b: Input Integer
 *
 * Return: The result of subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that returns the product of a and b
 * @a: Input Integer
 * @b: Input Integer
 *
 * Return: The result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that returns the division of a and b
 * @a: Input Integer
 * @b: Input Intger
 *
 * Return: The result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Function that returns the module of a and b
 * @a: Input Integer
 * @b: Input Integer
 *
 * Return: The result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
