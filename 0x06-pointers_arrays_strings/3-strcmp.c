#include <string.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input string
 * @s2: input string
 *
 * Return: not sure
 */

int _strcmp(char *s1, char *s2)
{
	int i = strlen(s1);
	int j = strlen(s2);
	int greater;
	
	if (i < j)
	{
		greater = j;
	}
	else if (i > j)
	{
		greater = i;
	}
	else {
		greater = i;
	}

	for (i = 0; i < bigger; i++)
	{
		if (s1[i] == s2[i])
		{
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
