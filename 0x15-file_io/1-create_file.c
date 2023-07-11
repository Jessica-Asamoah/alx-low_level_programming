#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Gets the length of a string
 * @s: string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s != NULL && s[len] != '\0')
		len++;
	return (len);
}

/**
 * create_file - Function that creates a file
 * @filename: File name
 * @text_content: The text to write
 *
 * Return: 1(success) or -1(failure)
 */

int create_file(const char *filename, char *text_content)
{
	int fp = 0;
	int count = 0;
	int len = _strlen(text_content);

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp < 0)
		return (-1);
	if (len > 0)
		count = write(fp, text_content, len);
	if (count < 0 || count != len)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
