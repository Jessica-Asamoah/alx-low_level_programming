#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: count
 * @argv: string array of arguments
 *
 * Return: 0 (success) else 1 (failure)
 */

int main(int argc, char *argv[])
{
	int i, c, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = i; i <argc; i++)
	{
		for (c = 0; argv[i][c] != '\0'; c++)
		{
			if (!isdigit(argv[i][c]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
