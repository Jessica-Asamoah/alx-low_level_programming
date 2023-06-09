#include <stdio.h>

/**
 * main - Entry point
 * @argc: The count
 * @argv: arguments string
 *
 * Return: count of arguments
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (argc - 1);
}
