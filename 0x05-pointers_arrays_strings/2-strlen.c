#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	printf("%lu\n", sizeof(s)/sizeof(s[0]));
	len = 1;

	return (len);
}
