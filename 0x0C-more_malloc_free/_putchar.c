#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: Character
 *
 * Return: 1(success) -1(otherwise)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
