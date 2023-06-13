#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: Input string of the first string
 * @s2: Input string of the second string
 * Return: Pointer to the concatenated strings or NULL if the string
 * is NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str, *start_s1, *start_s2;
	int i = 0, len_s1 = 0, len_s2 = 0;

	start_s1 = s1;
	start_s2 = s2;

	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		len_s1++;
		s1++;
	}
	s1 = start_s1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		len_s2++;
		s2++;
	}
	s2 = start_s2;
	new_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	start_s1 = new_str;
	if (new_str == NULL)
		return (NULL);
	for (; i < (len_s1 + len_s2); i++)
	{
		if (i < len_s1)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';
	return (start_s1);
}
