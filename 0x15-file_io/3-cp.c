#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_to_buffer - reads from file into buffer
 * @file: File descriptor
 * @buff: buffer used to store chars
 * @letters: number of characters to read
 *
 * Return: Number of chars read or -1(failure)
 */

int read_to_buffer(int file, char *buff, int letters)
{
	int count = 0;

	count = read(file, buff, letters);
	if (count < 0)
	{
		return (-1);
	}
	buff[count] = '\0';
	return (count);
}

/**
 * write_to_file - Writes from buffer to file
 * @file: file descriptor
 * @buff: buffer
 * @letters: length of the buffer
 *
 * Return: number of characters written or -1(failure)
 */

int write_to_file(int file, char *buff, int letters)
{
	int count = 0;

	count = write(file, buff, letters);
	if (count < 0)
		return (-1);
	return (count);
}

/**
 * _frw_error - Prints file and read or writes error
 * @f: File name
 * @code: the exit code
 *
 * Return: void
 */

void _frw_error(char *f, int code)
{
	if (code == 98)
		dprintf(2, "Error: Can't read from file %s\n", f);
	else if (code == 99)
		dprintf(2, "Error: Can't write to %s\n", f);
	exit(code);
}

/**
 * _fclose_error - Prints fclose error
 * @fd: the file descriptor
 *
 * Return: void
 */

void _fclose_error(int fd)
{
	dprintf(2, "Error: Can't close fd %d\n", fd);
	close(100);
}

/**
 * main - Entry point
 * @argv: array of arguments
 * @argc: the number of arguments
 *
 * Return: 0(success) or 1(error)
 */

int main(int argc, char *argv[])
{
	char *buff = malloc(sizeof(char) * 1024);
	int count = 0, len = 0, fr = 0, fw = 0;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (buff == NULL)
		return (0);
	fr = open(argv[1], O_RDONLY);
	fw = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fr < 0)
		_frw_error(argv[1], 98);
	if (fw < 0)
		_frw_error(argv[2], 99);
	while (1)
	{
		count = read_to_buffer(fr, buff, 1024);
		if (count < 0)
			_frw_error(argv[1], 98);
		if (count == 0)
			break;
		len = write_to_file(fw, buff, count);
		if (len == -1 || len != count)
			_frw_error(argv[2], 99);
	}
	if (close(fr) == -1)
		_fclose_error(fr);
	if (close(fw) == -1)
		_fclose_error(fw);
	return (0);
}
