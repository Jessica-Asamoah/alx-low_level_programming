#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the count
 * @argv: string array for the arguments entered
 *
 * Return: 0(succes) or 1(failure)
 */

int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		sum *= atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
