#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; ++i);
	printf("%d\n", i);
	len = 1;

	return (len);
}
