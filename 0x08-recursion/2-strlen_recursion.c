#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: input char
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*S)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
