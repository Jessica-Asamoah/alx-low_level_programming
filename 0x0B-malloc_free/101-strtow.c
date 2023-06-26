#include "main.h"
#include <stdlib.h>

/**
 * count_words - counts words in a string
 * @str: string
 *
 * Return: number of words
 */

int count_words(char *str)
{
	int spaces, words, i;

	i = 0;
	spaces = 1;
	words = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			spaces++;
		}
		else
		{
			if (spaces > 0)
			{
				words++;
				spaces = 0;
			}
		}
		i++;
	}
	return (words);
}

/**
 * next_word - Gets index of the next word
 * @str: Input string
 * @start: Start index
 *
 * Return: index of the word, else -1
 */

int next_word(char *str, int start)
{
	int spaces = 1;

	while (str[start] != '\0')
	{
		if (str[start] == ' ')
		{
			spaces++;
		}
		else
		{
			if (spaces > 0)
				return (start);
		}
		start++;
	}
	return (-1);
}

/**
 * word_len - gets the length of a word
 * @str: Input string
 * @start: start index
 *
 * Return: Length of word
 */

int word_len(char *str, int start)
{
	int len = 0;

	while (str[start + len] != ' ' && str[start + len] != '\0')
		len++;
	return (len);
}

/**
 * strtow - converts string to array of words
 * @str: Input string
 *
 * Return: array of strings
 */

char **strtow(char *str)
{
	char **arr = NULL;
	int k = 0;
	int words, i, j, len;

	words = count_words(str);

	arr = malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);
	i = next_word(str, 0);
	while (i != -1)
	{
		len = word_len(str, i);
		arr[k] = malloc(sizeof(char) * (len + 1));
		if (arr[k] == NULL)
			return (NULL);
		for (j = 0; j < len; j++)
			arr[k][j] = str[i + j];
		arr[k][j] = '\0';
		k++;
		i = next_word(str, i + j);
	}
	arr[k] = NULL;
	return (arr);
}
